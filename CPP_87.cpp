#include <vector>

std::vector<std::vector<int>> get_row(std::vector<std::vector<int>>& matrix, int row) {
    std::vector<int> temp;
    for(int i = 0; i < matrix[0].size(); i++) {
        temp.push_back(matrix[row][i]);
    }
    return temp;
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
    assert (issame(get_row({},{1},{1,2,3}),{{2,2}}));
}