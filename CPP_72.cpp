```
#include <vector>
#include <string>
#include <algorithm>

bool will_it_fly(std::vector<int> q, int w) {
    std::string str = "";
    for (int i : q) {
        str += std::to_string(i);
    }
    if (str != std::string(rev(str))) {
        return false;
    }
    int sum = 0;
    for (int i : q) {
        sum += i;
    }
    return sum <= w;
}

std::string rev(std::string s) {
    std::string res = "";
    for (int i = s.length() - 1; i >= 0; i--) {
        res += s[i];
    }
    return res;
}