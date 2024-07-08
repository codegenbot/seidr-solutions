#include <vector>

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
    std::vector<std::vector<int>> row;
    int num_rows, num_cols;

    std::cout << "Enter number of rows: ";
    std::cin >> num_rows;
    std::cout << "Enter number of columns: ";
    std::cin >> num_cols;

    row.resize(num_rows);

    for(int i = 0; i < num_rows; i++) {
        row[i].resize(num_cols);
        for(int j = 0; j < num_cols; j++) {
            int val;
            std::cout << "Enter value at (" << i + 1 << ", " << j + 1 << "): ";
            std::cin >> val;
            row[i][j] = val;
        }
    }

    int m_row;
    std::cout << "Enter the row number: ";
    std::cin >> m_row;

    for(int i = 0; i < num_cols; i++) {
        std::cout << row[m_row - 1][i] << " ";
    }

    return 0;
}