```cpp
#include <vector>
#include <stdexcept>

std::vector<std::vector<int>> get_row(const std::vector<std::vector<int>>& m, int k) {
    if(k > m.size()) 
        throw std::runtime_error("Index out of bounds");
    
    return m[k-1];
}

bool issame(const std::vector<std::vector<int>>& a, const std::vector<std::vector<int>>& b) {
    if(a.size() != b.size()) 
        return false;
    
    for(int i = 0; i < a.size(); i++) {
        if(std::vector<int>(a[i]).size() != std::vector<int>(b[i]).size()) 
            return false;
        
        for(int j = 0; j < a[i].size(); j++) {
            if(a[i][j] != b[i][j]) 
                return false;
        }
    }

    return true;
}