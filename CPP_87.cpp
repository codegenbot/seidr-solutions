#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

std::vector<std::vector<int>> get_row(std::vector<std::vector<int>> lst, int x) {
    std::vector<std::vector<int>> result;
    for(int i=0; i<lst.size(); i++){
        for(int j=0; j<lst[i].size(); j++){
            if(lst[i][j] == x){
                result.push_back({i, j});
            }
        }
    }
    std::sort(result.begin(), result.end(), [](const std::vector<int>& a, const std::vector<int>& b){
        return a[0] < b[0];
    });
    for(auto& row : result){
        std::sort(row.begin(), row.end(), std::greater<int>());
    }
    return result;
}

bool issame(std::vector<std::vector<int>> a, std::vector<std::vector<int>> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i].size() != b[i].size()) {
            return false;
        }
    }
    for (int i = 0; i < a.size(); i++) {
        for (int j = 0; j < a[i].size(); j++) {
            if (a[i][j] != b[i][j]) {
                return false;
            }
        }
    }
    return true;
}

int main() {
    assert(issame(get_row({{}, {1}, {1, 2, 3}}, 3), {{2, 2}}));

    // Add more test cases here to verify the correctness of the code
    assert(issame(get_row({{}, {1, 2}, {3, 4, 5}}, 6), {}));
    assert(issame(get_row({{6, 7, 8}, {9}, {}}, 9), {{1, 0}}));
    assert(issame(get_row({{2, 3}, {4, 5}, {6, 7}}, 2), {{0, 0}}));

    return 0;
}