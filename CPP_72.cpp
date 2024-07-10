```cpp
#include <iostream>
#include <vector>
#include <string>

bool will_it_fly(vector<int> q, int w) {
    std::string str = "";
    for (int i : q) {
        str += std::to_string(i);
    }
    if (str != std::string(str.rbegin(), str.rend()).s) return false;
    int sum = 0;
    for (int i : q) sum += i;
    return sum <= w;
}

int main() {
    bool result = will_it_fly({1, 2, 3}, 5);
    std::cout << "Will it fly? " << (result ? "Yes" : "No") << std::endl;
    return 0;
}