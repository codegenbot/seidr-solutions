#include <iostream>
#include <vector>

std::vector<int> leaders(const std::vector<int>& v) {
    std::vector<int> result;
    for (auto it = v.rbegin(); it != v.rend(); ++it) {
        bool isLeader = true;
        for (auto jt = it + 1; jt != v.rend() && *jt > *it; ++jt) {
            if (*jt <= *it) {
                isLeader = false;
                break;
            }
        }
        if (isLeader || it == v.rbegin()) result.push_back(*it);
    }
    return result;
}

int main() {
    std::vector<int> input = {1, 2, 3, 4, 5};
    auto output = leaders(input);
    for (auto x : output) {
        std::cout << x << " ";
    }
    return 0;
}