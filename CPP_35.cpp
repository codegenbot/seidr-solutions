#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>

int main() {
    std::vector<int> l;
    int num;

    while (std::cin >> num) {
        l.push_back(num);
    }

    return *std::max_element(l.begin(), l.end());
}