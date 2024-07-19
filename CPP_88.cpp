#include <vector>
#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b) {
    if(a.empty()) return a;
    
    int sum = a.front() + a.back();
    
    if(sum % 2 == 0){
        sort(a.rbegin(), a.rend());
    } else {
        sort(a.begin(), a.end());
    }
    
    return a;
}