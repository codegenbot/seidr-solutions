#include <vector>
#include <algorithm>
#include <sstream>
#include <string>

bool is_palindrome(std::string s) {
    std::string t = s;
    std::reverse(t.begin(), t.end());
    return t == s;
}

bool will_it_fly(std::vector<int> q, int w) {
    std::string str = "";
    for (int i : q) {
        str += std::to_string(i);
    }
    if (!is_palindrome(str)) {
        return false;
    } else {
        int sum = 0;
        for (int i : q) {
            sum += i;
        }
        return sum <= w;
    }
}