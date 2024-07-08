```cpp
#include <vector>
#include <initializer_list>

std::vector<std::vector<int>> get_row(const std::vector<std::vector<int>>& matrix, int row) {
    return matrix[row];
}

bool issame(const std::vector<std::vector<int>>& a, const std::vector<std::vector<int>>& b) {
    if(a.size() != b.size()) 
        return false;
    
    for(int i = 0; i < a.size(); i++) {
        if(a[i].size() != b[i].size()) 
            return false;
        
        for(int j = 0; j < a[i].size(); j++) {
            if(a[i][j] != b[i][j]) 
                return false;
        }
    }

    return true;
}

int main() {
    std::vector<std::vector<int>> row = {{}, {1}, {1, 2, 3}};
    assert(issame(get_row(row, 0), {{1}}));
    assert(issame(get_row(row, 1), {{1, 2, 3}}));
    assert(issame(get_row(row, 2), {{1, 2, 3}}));
}