```cpp
#include <iostream>
#include <vector>

bool issame(std::vector<std::vector<int>>& a, std::vector<std::vector<int>>& b) {
    // Your comparison logic here
}

int main() {
    assert(issame(get_row({{} , {1} , {1, 2, 3}} , 1) , {{0 , 0}}));
    return 0;
}

std::vector<std::vector<int>> get_row(std::vector<std::vector<int>> lst, int x) {
    std::vector<std::vector<int>> result;
    for (int i = 0; i < lst.size(); i++) {
        if (i == x) {
            for (int j = 0; j < lst[i].size(); j++) {
                result.push_back({x, j});
            }
        }
    }
    return result;
}