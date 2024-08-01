#include <vector>

bool issame(vector<vector<int>> a, vector<vector<int>> b) {
    if ((a[0] == b[0])) {
        return a[1] == b[1];
    }
    return false;
}