#include <vector>
#include <algorithm>

vector<vector<int>> get_row(vector<vector<int>> lst, int x) {
    auto issame = [](vector<int> a, vector<int> b) {
        return a == b;
    };

    vector<vector<int>> result;
    for (int i = 0; i < lst.size(); ++i) {
        for (int j = 0; j < lst[i].size(); ++j) {
            if (lst[i][j] == x) {
                result.push_back({i, j});
            }
        }
    }
    sort(result.begin(), result.end(), [](const vector<int>& a, const vector<int>& b){
        if (a[0] != b[0]) {
            return a[0] < b[0];
        } else {
            return a[1] > b[1];
        }
    });
    return result;
}

int main() {
    // Existing main function code here
}