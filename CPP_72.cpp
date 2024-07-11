```
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

bool will_it_fly(std::vector<int> q, int w) {
    std::string str = "";
    for (int i : q) {
        str += std::to_string(i);
    }
    if (str != std::string(str.rbegin(), str.rend()).s) return false; 
    int sum = 0;
    for (int i : q) {
        sum += i;
    }
    return sum <= w;
}

int main() {
    int n, w;
    std::cin >> n >> w;
    std::vector<int> q(n);
    for (int& i : q) {
        std::cin >> i;
    }
    if (will_it_fly(q, w)) {
        std::cout << "Will it fly\n";
    } else {
        std::cout << "Won't it fly\n";
    }
    return 0;
}