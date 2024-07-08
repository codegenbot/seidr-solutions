#include <vector>
#include <iostream>

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

int main() {
    std::vector<std::vector<int>> matrix;
    int row;

    // Read input
    int rows, cols;
    std::cin >> rows >> cols;
    for(int i = 0; i < rows; ++i) {
        std::vector<int> rowVector(cols);
        for(int j = 0; j < cols; ++j) {
            std::cin >> rowVector[j];
        }
        matrix.push_back(rowVector);
    }

    // Read input
    std::cin >> row;

    if(issame(matrix, matrix)) 
        std::cout << get_row(matrix, row-1) << std::endl;
    else
        std::cout << "False" << std::endl;

    return 0;
}

int get_row(std::vector<std::vector<int>> matrix, int row) {
    return matrix[row][0];
}