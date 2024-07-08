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
    std::vector<std::vector<int>> matrix1, matrix2;
    int m, n;
    std::cout << "Enter the number of rows and columns for each matrix: ";
    std::cin >> m >> n;
    
    // read in the first matrix
    for(int i = 0; i < m; i++) {
        std::vector<int> temp;
        for(int j = 0; j < n; j++) {
            int x;
            std::cout << "Enter element " << i << "," << j << ": ";
            std::cin >> x;
            temp.push_back(x);
        }
        matrix1.push_back(temp);
    }
    
    // read in the second matrix
    for(int i = 0; i < m; i++) {
        std::vector<int> temp;
        for(int j = 0; j < n; j++) {
            int x;
            std::cout << "Enter element " << i << "," << j << ": ";
            std::cin >> x;
            temp.push_back(x);
        }
        matrix2.push_back(temp);
    }

    if(issame(matrix1, matrix2)) 
        std::cout << "The two matrices are identical." << std::endl;
    else 
        std::cout << "The two matrices are not identical." << std::endl;

    return 0;
}