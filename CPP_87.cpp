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
}

int main() {
    std::vector<std::vector<int>> a(3, std::vector<int>(2));
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 2; ++j) {
            a[i][j] = get_row(i, j);
        }
    }

    std::cout << "Result: " << std::endl;
    // Your code here
    return 0;
}

int get_row(int row, int column) {
    // Add your logic to generate the row based on the inputs
    if (row == 0) {
        if(column == 0) return 1;
        else if (column == 1) return 2;
    } 
    else if(row == 1) {
        if(column == 0) return 3;
        else if(column == 1) return 4;
    }
    else {
        if(column == 0) return 5;
        else if (column == 1) return 6;
    }

    return -1; // Return some error value or handle this situation
}