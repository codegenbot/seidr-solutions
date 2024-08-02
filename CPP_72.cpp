#include <iostream>
#include <vector>
#include <string>

bool will_it_fly(std::vector<int> q, int w) {
    std::string str = "";
    for (int i : q) {
        str += std::to_string(i);
    }
    
    bool balanced = true;
    if (str != std::string(str.rbegin(), str.rend()).s) {
        return false;
    }
    
    int sum = 0;
    for (int i : q) {
        sum += i;
    }
    
    return sum <= w && balanced;
}