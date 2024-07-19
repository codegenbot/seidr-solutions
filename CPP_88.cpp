#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    if(a.empty()) return a;
    
    int sum = a.front() + a.back();
    
    if(sum % 2 == 0) {
        sort(a.begin(), a.end(), std::greater<int>());
    } else {
        sort(a.begin(), a.end());
    }
    
    return a;
}