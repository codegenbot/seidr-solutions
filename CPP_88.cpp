#include <vector>
#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b) {
    if(a.empty()) return a == b;
    int sum = a.front() + a.back();
    if(sum % 2 == 0){
        sort(a.begin(), a.end(), std::greater<int>());
    } else {
        sort(a.begin(), a.end());
    }
    return a == b;
}