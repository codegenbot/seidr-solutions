#include <vector>
#include <string>
#include <algorithm>

bool will_it_fly(std::vector<int> q, int w) {
    std::string str = "";
    for (int i : q) {
        str += std::to_string(i);
    }
    
    if (!isPalindrome(str)) return false;
    
    int sum = 0;
    for (int i : q) {
        sum += i;
    }
    
    return sum <= w;
}

bool isPalindrome(std::string s) {
    std::string rev = s;
    std::reverse(rev.begin(), rev.end());
    return s == rev;
}