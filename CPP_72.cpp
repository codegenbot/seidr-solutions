```cpp
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
    int sum = 0;
    for (int i : q) {
        sum += i;
    }
    return sum <= w;
}

int main() {
    std::vector<int> q;
    int w;

    // Input from user
    std::cout << "Enter the list of queens: ";
    for (int &i : q) {
        std::cin >> i;
    }

    std::cout << "Enter the weight limit: ";
    std::cin >> w;

    if (will_it_fly(q, w)) {
        std::cout << "The queens will fly.\n";
    } else {
        std::cout << "The queens won't fly.\n";
    }

    return 0;
}