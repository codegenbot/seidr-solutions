```cpp
#include <vector>

bool issame(std::vector<int> a, std::vector<int> b) {
    if(a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i]) return false;
    }
    return true;
}

std::vector<int> even_odd_palindrome(int n) {
    std::vector<int> result;
    int i = 1;
    while(i <= n) {
        result.push_back(0);
        i *= 2;
    }
    i = 1;
    while(i <= n) {
        result.push_back(1);
        i *= 2;
    }
    std::reverse(result.begin(), result.end());
    return result;
}