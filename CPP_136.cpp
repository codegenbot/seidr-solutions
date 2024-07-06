#include <vector>

using namespace std;

vector<int> largest_smallest_integers(vector<int> lst) {
    vector<int> result = {0, 0};
    
    for (int num : lst) {
        if (num < 0) {
            if (result[0] == 0 || num > result[0]) {
                result[0] = num;
            }
        } else if (num > 0) {
            if (result[1] == 0 || num < result[1]) {
                result[1] = num;
            }
        }
    }
    
    return result;
}