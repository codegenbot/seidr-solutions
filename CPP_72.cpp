```cpp
#include <vector>
#include <string>
#include <algorithm>

bool is_palindrome(std::string s) {
    std::string t = s;
    std::reverse(t.begin(), t.end());
    return s == t;
}

bool will_it_fly(std::vector<int> q, int w) {
    std::string s = "";
    for (int i : q) {
        s += std::to_string(i);
    }
    return is_palindrome(s) && std::accumulate(q.begin(), q.end(), 0) <= w;
}