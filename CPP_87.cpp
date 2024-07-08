#include <vector>

std::vector<int> getRow(std::vector<std::vector<int>> a, int row) {
    return a[row];
}

bool isSame(std::vector<std::vector<int>> a, std::vector<std::vector<int>> b) {
    if(a.size() != b.size()) 
        return false;
    
    for(int i = 0; i < a.size(); i++) {
        if(getRow(a, i).size() != getRow(b, i).size()) 
            return false;
        
        for(int j = 0; j < getRow(a, i).size(); j++) {
            if(getRow(a, i)[j] != getRow(b, i)[j]) 
                return false;
        }
    }

    return true;

}