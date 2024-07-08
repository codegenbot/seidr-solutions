```
#include <vector>

bool issame(std::vector<std::vector<int>> a, std::vector<std::vector<int>> b) {
    if(a.size() != b.size()) 
        return false;
    
    for(int i = 0; i < a.size(); i++) {
        if(get_row(a, i).size() != get_row(b, i).size()) 
            return false;
        
        for(int j = 0; j < get_row(a, i).size(); j++) {
            if(get_row(a, i)[j] != get_row(b, i)[j]) 
                return false;
        }
    }

    return true;

}

int main() {
    
}