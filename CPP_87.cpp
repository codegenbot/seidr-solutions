```
#include <vector>
#include <iostream>

std::vector<int> get_row(const std::vector<std::vector<int>>& matrix, int row) {
    return matrix[row];
}

bool issame(std::vector<std::vector<int>> a, std::vector<std::vector<int>> b) {
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
    int rows, cols;
    std::cin >> rows >> cols;

    std::vector<std::vector<int>> matrix1(rows);
    std::vector<std::vector<int>> matrix2(rows);

    for(int i = 0; i < rows; i++) {
        matrix1[i].resize(cols);
        matrix2[i].resize(cols);
        
        for(int j = 0; j < cols; j++) {
            int val;
            std::cin >> val;

            matrix1[i][j] = val;
            matrix2[i][j] = val;
        }
    }

    bool res = issame(matrix1, matrix2);

    if(res) 
        std::cout << "True";
    else
        std::cout << "False";

    return 0;
}