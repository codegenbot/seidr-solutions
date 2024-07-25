#include <iostream>
#include <vector>
#include <cassert>

bool monotonic(std::vector<int> l) {
    bool increasing = true;
    bool decreasing = true;
    for (size_t i = 1; i < l.size(); ++i) {
        if (l[i] < l[i - 1]) {
            increasing = false;
        }
        if (l[i] > l[i - 1]) {
            decreasing = false;
        }
    }
    return increasing || decreasing;
}

int main() {
    assert(monotonic({9, 9, 9, 9}) == true);
    std::cout << "Input values for l: ";
    std::vector<int> l;
    int val;
    while(std::cin >> val) {
        l.push_back(val);
    }
    std::cout << "Is the sequence monotonic? " << (monotonic(l) ? "true" : "false") << std::endl;

    return 0;
}