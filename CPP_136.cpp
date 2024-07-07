#include <vector>

using namespace std;

vector<int> largest_smallest_integers(vector<int> lst) {
    vector<int> result(2, 0);
    
    for (int num : lst) {
        if (num < 0 && result[0] == 0) {
            result[0] = num;
        } else if (num > 0 && result[1] == 0) {
            result[1] = num;
        }
    }
    
    return result;
}