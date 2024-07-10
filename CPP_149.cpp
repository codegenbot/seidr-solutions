#include <vector>
#include <algorithm>
#include <string>

struct Result {
    std::string str;
    int sum;
};

Result sorted_list_sum(const std::vector<std::string>& list) {
    std::sort(list.begin(), list.end());
    int sum = 0;
    for (const auto& str : list) {
        sum += str.length();
    }
    return Result{ "", sum };
}