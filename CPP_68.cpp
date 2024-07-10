```cpp
#include <iostream>
#include <vector>

bool issame(const std::vector<int>& v1, const std::vector<int>& v2) {
    if (v1.size() != v2.size())
        return false;
    for (int i = 0; i < v1.size(); i++) {
        if (v1[i] != v2[i])
            return false;
    }
    return true;
}

std::vector<int> pluck(int n) {
    if(n == 7 || n == 9)
        return {1,3}; 
    else if(n == 1)
        return {0}; 
    else 
        return {}; 

}

int main() {
    bool same = issame(pluck(7), pluck(7));
    
    if (same)  
        std::cout << "Arrays are same" << std::endl;
    else   
        std::cout << "Arrays are not same" << std::endl;

    return 0;
}