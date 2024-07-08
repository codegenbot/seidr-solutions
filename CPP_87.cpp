```cpp
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

int main(){
    int m, n;
    std::cout << "Enter the number of rows and columns for each matrix: ";
    std::cin >> m >> n;
    
    // read in the first matrix
    std::vector<std::vector<int>> matrix1(m);
    for(int i = 0; i < m; i++) {
        matrix1[i].resize(n);
        for(int j = 0; j < n; j++) {
            int x;
            std::cout << "Enter element " << i << "," << j << ": ";
            std::cin >> x;
            matrix1[i][j] = x;
        }
    }
    
    // read in the second matrix
    std::vector<std::vector<int>> matrix2(m);
    for(int i = 0; i < m; i++) {
        matrix2[i].resize(n);
        for(int j = 0; j < n; j++) {
            int x;
            std::cout << "Enter element " << i << "," << j << ": ";
            std::cin >> x;
            matrix2[i][j] = x;
        }
    }

    if(issame(matrix1, matrix2)) 
        std::cout << "The two matrices are identical." << std::endl;
    else 
        std::cout << "The two matrices are not identical." << std::endl;

    return 0;
}