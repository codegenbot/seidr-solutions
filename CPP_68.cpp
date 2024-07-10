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
    std::vector<int> result;

    if(n == 7 || n == 9)
        for(int i : {1,3}) 
            result.push_back(i); 
    else if(n == 1)
        result.push_back(0); 

    return result; 

}

int main() {
    bool same = true;
    for(int i : {7, 9, 7, 1}) {
        if (!issame(pluck(i), pluck(i)))
            same = false;
    }
    if (same)  
        std::cout << "Arrays are same" << std::endl;
    else   
        std::cout << "Arrays are not same" << std::endl;

    return 0;
}