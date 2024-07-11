#include <iostream>
#include <vector>
#include <algorithm>

bool will_it_fly(std::vector<int> q, int w) {
    std::string str = "";
    for (int i : q) {
        str += std::to_string(i);
    }
    if (!str.compare(std::to_string(std::string(str.rbegin(), str.rend())))) return false;
    int sum = 0;
    for (int i : q) {
        sum += i;
    }
    return sum <= w;
}

int main() {
    std::vector<int> q = {4, 3};
    int w = 6;
    if (will_it_fly(q, w)) {
        std::cout << "The aircraft will fly." << std::endl;
    } else {
        std::cout << "The aircraft won't fly." << std::endl;
    }
    return 0;
}