#include <vector>
#include <algorithm>
#include <string>

bool is_palindrome(std::string s) {
    std::string t = s;
    std::reverse(t.begin(), t.end());
    return s == t;
}

bool will_it_fly(const std::vector<int>& q, int w) {
    std::string str = "";
    for (int i : q) {
        str += std::to_string(i);
    }
    return is_palindrome(str) && std::accumulate(q.begin(), q.end(), 0) <= w;
}