#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> v) {
    int min_diff = INT_MAX;
    int split_idx = -1;
    
    for (int i = 0; i < v.size(); i++) {
        if (i == v.size() - 1 || v[i] != v[i+1]) {
            int diff = abs((i + 1) / 2 * (v[i] - v[i-1]));
            if (diff < min_diff) {
                min_diff = diff;
                split_idx = i;
            }
        }
    }
    
    return {{0}, {0}}; // initialize the result with empty vectors
}