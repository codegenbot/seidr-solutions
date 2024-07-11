#include <iostream>
#include <vector>
#include <string>

std::vector<int> even_odd_count(int num) {
    int even = 0, odd = 0;
    std::string str = std::to_string(std::abs(num));
    for (char c : str) {
        if ((c - '0') % 2 == 0)
            even++;
        else
            odd++;
    }
    return {even, odd};
}