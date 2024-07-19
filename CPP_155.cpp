#include <vector>
#include <string>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b){
    std::vector<int> result(2, 0);
    std::string numStr = std::to_string(abs(num));
    
    for(char c : numStr){
        if((c - '0') % 2 == 0){
            result[0]++;
        } else {
            result[1]++;
        }
    }
    
    return result;
}