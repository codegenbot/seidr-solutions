```cpp
#include <vector>
#include <string>

std::vector<int> even_odd_count(int num) {
    int evens = 0, odds = 0;
    std::string str = std::to_string(std::abs(num));
    for (char c : str) {
        if ((c - '0') % 2 == 0)
            evens++;
        else
            odds++;
    }
    return {evens, odds};
}

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}