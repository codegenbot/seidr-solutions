#include <vector>
using namespace std;

vector<int> largest_smallest_integers(vector<int> lst) {
    vector<int> result;
    
    int maxNeg = 0;
    int minPos = INT_MAX;

    for (int num : lst) {
        if (num < 0 && num > maxNeg) {
            maxNeg = num;
        }
        else if (num > 0 && num < minPos) {
            minPos = num;
        }
    }

    result.push_back(maxNeg);
    result.push_back(minPos);

    return result;
}