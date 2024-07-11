#include <iostream>
#include <vector>
#include <algorithm>

bool will_it_fly(std::vector<int> q, int w) {
    std::string str = "";
    for (int i : q) {
        str += std::to_string(i);
    }
    if (!str.compare(std::to_string(reverse(str)))) return false;
    int sum = 0;
    for (int i : q) {
        sum += i;
    }
    return sum <= w;
}

int reverse(const std::string& str) {
    std::string result = str;
    std::reverse(result.begin(), result.end());
    return std::stoi(result);
}

int main() {
    int w; // weight
    std::cout << "Enter the weight: ";
    std::cin >> w;

    int n; // number of quadruplets
    std::cout << "Enter the number of quadruplets: ";
    std::cin >> n;

    std::vector<int> q(n);
    for (int i = 0; i < n; ++i) {
        std::cout << "Enter quadruplet " << i + 1 << ": ";
        std::cin >> q[i];
    }

    if (will_it_fly(q, w)) {
        std::cout << "The quadruplets will fly.\n";
    } else {
        std::cout << "The quadruplets won't fly.\n";
    }
}