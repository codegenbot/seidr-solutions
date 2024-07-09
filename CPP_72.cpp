#include <iostream>
#include <vector>
#include <algorithm>

bool will_it_fly(std::vector<int> q, int w) {
    std::string str = "";
    for (int i : q) {
        str += std::to_string(i);
    }
    if (str != std::string(str.rbegin(), str.rend())) {
        return false;
    }
    long sum = 0;
    for (int i : q) {
        sum += i;
    }
    return static_cast<long>(sum) <= w;
}

int main() {
    assert(will_it_fly({5}, 5) == true);
    // Add your code here...
}