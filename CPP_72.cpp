#include <vector>
#include <string>
#include <algorithm>

bool will_it_fly(const std::vector<int>& q, int w) {
    std::string str = "";
    for (int i : q) {
        str += std::to_string(i);
    }
    std::reverse(str.begin(), str.end());
    if (str != std::to_string(q[0])) return false; 
    int sum = 0;
    for (int i : q) {
        sum += i;
    }
    return sum <= w;
}