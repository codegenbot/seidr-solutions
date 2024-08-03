#include <vector>
#include <string>

std::vector<int> even_odd_count(int num) {
    std::vector<int> result = {0, 0};
    std::string numStr = std::to_string(std::abs(num));
    for (char c : numStr) {
        if (c % 2 == 0) {
            result[0]++;
        } else {
            result[1]++;
        }
    }
    return result;
}