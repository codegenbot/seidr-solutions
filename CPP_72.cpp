#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

bool will_it_fly(std::vector<int> q, int w) {
    std::string str = "";
    for (int i : q) {
        str += std::to_string(i);
    }
    if (str != std::string(str.rbegin(), str.rend())) return false;
    long sum = 0;
    for (int i : q) sum += i;
    return sum <= w;
}

int main() {
    assert(will_it_fly({5}, 5) == true);
    // add your test cases here
    return 0;
}