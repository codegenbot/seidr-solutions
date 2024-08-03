#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

bool will_it_fly(std::vector<int> q, int w) {
    std::string str = "";
    for (int i : q) {
        str += std::to_string(i);
    }
    if (str != std::string(reverse(str.begin(), reverse(str.end()))) return false;
    int sum = 0;
    for (int i : q) {
        sum += i;
    }
    return sum <= w;
}

std::vector<int> reverse(std::vector<int> v) {
    std::vector<int> result;
    for (int i = v.size() - 1; i >= 0; --i) {
        result.push_back(v[i]);
    }
    return result;
}

int main() {
    assert(will_it_fly({5}, 5) == true);
    return 0;
}