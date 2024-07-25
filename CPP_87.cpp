#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> get_row(vector<vector<int>> lst, int x) {
    vector<vector<int>> result;
    for (int i = 0; i < lst.size(); i++) {
        if (lst[i].size() > 0) {
            for (int j = 0; j < lst[i].size(); j++) {
                if (lst[i][j] == x) {
                    result.push_back({i, j});
                }
            }
        }
    }
    sort(result.begin(), result.end());
    for (auto &vec : result) {
        reverse(vec.begin(), vec.end());
    }
    return result;
}

int main() {
    vector<vector<int>> lst = {{1, 2, 3, 4, 5, 6}, {1, 2, 3, 4, 1, 6}, {1, 2, 3, 4, 5, 1}};
    int x = 1;
    vector<vector<int>> result = get_row(lst, x);
    for (auto &vec : result) {
        cout << "{" << vec[0] << ", " << vec[1] << "}" << endl;
    }
    return 0;
}