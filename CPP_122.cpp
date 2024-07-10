#include <vector>
#include <algorithm>
#include <string>

int add_elements(const std::vector<std::string>& str_arr) {
    int sum = 0;
    for (const auto& str : str_arr) {
        if (str.size() <= 2) { 
            sum += std::stoi(str);
        }
    }
    return sum;
}