#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> v;
    int n;
    while (true) {
        std::cout << "Enter a number (or -1 to finish): ";
        std::cin >> n;
        if (n == -1)
            break;
        v.push_back(n);
    }
    std::cout << *std::max_element(v.begin(), v.end()) << std::endl;
    return 0;
}