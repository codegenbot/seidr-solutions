#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(vector<int> v1, vector<int> v2) {
    if (v1.size() != v2.size())
        return false;
    for (int i = 0; i < v1.size(); i++) {
        if (v1[i] != v2[i])
            return false;
    }
    return true;
}

vector<vector<int>> get_row(vector<vector<int>>& lst, int x) {
    vector<vector<int>> result;
    for (int i = 0; i < lst.size(); i++) {
        if (x == 1) {
            for (int j = lst[i].size() - 1; j >= 0; j--) {
                result.push_back({i, j});
            }
        } else {
            for (int j = 0; j < lst[i].size(); j++) {
                result.push_back({i, j});
            }
        }
    }
    return result;
}

int main() {
    vector<vector<int>> v1 = {{1, 2}, {3, 4}};
    vector<vector<int>> v2 = {{3, 4}, {1, 2}};
    assert(compare(v1, v2));
    
    vector<vector<int>> lst;
    int x = 1;
    vector<vector<int>> result = get_row(lst, x);
    return 0;
}