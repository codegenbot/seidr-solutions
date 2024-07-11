#include <vector>
#include <algorithm>
#include <string>

bool will_it_fly(std::vector<int> q, int w) {
    std::string s = "";
    for (int i : q) {
        s += std::to_string(i);
    }
    if (!s.compare(s)) return false;
    int sum = 0;
    for (int i : q) {
        sum += i;
    }
    return sum <= w;
}