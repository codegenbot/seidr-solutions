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

std::vector<int> pluck(const std::vector<int>& n) {
    std::vector<int> result;

    for (int x : n) {
        if(x == 7 || x == 9)
            result.push_back(1); 
        else if(x == 1)
            result.push_back(0); 

    }

    return result; 

}

int main() {
    std::vector<int> v1 = {7, 9, 7, 1};
    std::vector<int> v2 = {1};

    if (issame(pluck(v1), pluck(v2)))  
        std::cout << "Arrays are same" << std::endl;
    else   
        std::cout << "Arrays are not same" << std::endl;

    return 0;
}