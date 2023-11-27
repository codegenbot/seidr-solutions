#include <vector>
#include <string>

std::vector<int> even_odd_count(int num) {
    int even_count = 0;
    int odd_count = 0;

    std::string num_str = std::to_string(std::abs(num));
    for (char c : num_str) {
        int digit = c - '0';
        if (digit % 2 == 0) {
            even_count++;
        } else {
            odd_count++;
        }
    }

    return {even_count, odd_count};
}