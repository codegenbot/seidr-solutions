#include <vector>

using namespace std;

vector<int> largest_smallest_integers(vector<int> lst) {
    int maxNeg = 0;
    int minPos = INT_MAX;

    for (int num : lst) {
        if (num < 0 && num > maxNeg) {
            maxNeg = num;
        }
        if (num > 0 && num < minPos) {
            minPos = num;
        }
    }

    return {(maxNeg != 0) ? maxNeg : 0, (minPos != INT_MAX) ? minPos : 0};
}