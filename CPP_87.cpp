#include <iostream>
#include <vector>

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

int get_row(std::vector<std::vector<int>> matrix, int row) {
    return matrix[row][0];
}

int main() {
    std::vector<std::vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}};
    int row;
    
    std::cout << "Enter the row number: ";
    std::cin >> row;

    if(issame(matrix, matrix)) {
        std::cout << "Matrix is same. \n";
    } else {
        std::cout << "Matrix is not same.\n";
    }

    int result = get_row(matrix, row);
    std::cout << "The value of the " << row << "th row is: " << result;
    
    return 0;
}