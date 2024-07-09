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
    long sum = 0;
    for (int i : q) {
        sum += i;
    }
    return static_cast<long>(sum) <= w;
}

int main() {
    assert(will_it_fly({5}, 5) == true);
    std::vector<int> q;
    int w;
    std::cout << "Enter the number of quails: ";
    int n;
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        std::cout << "Enter weight of quail " << i + 1 << ": ";
        std::cin >> q.push_back;
    }
    std::cout << "Enter the maximum weight: ";
    std::cin >> w;
    if (will_it_fly(q, w)) {
        std::cout << "The quails will fly." << std::endl;
    } else {
        std::cout << "The quails won't fly." << std::endl;
    }
    return 0;
}