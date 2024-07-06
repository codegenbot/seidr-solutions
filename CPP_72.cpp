```cpp
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

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
    std::cout << "Enter the number of qualities: ";
    std::cin >> n;
    std::vector<int> qualities(n);
    std::cout << "Enter qualities: ";
    for (int &i : qualities) {
        std::cin >> i;
    }
    std::cout << "Enter the weight: ";
    std::cin >> w;
    
    if (will_it_fly(qualities, w)) {
        std::cout << "The system will fly.\n";
    } else {
        std::cout << "The system won't fly.\n";
    }
    
    return 0;
}