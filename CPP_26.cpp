#include <set>
bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

std::vector<std::vector<int>> remove_duplicates(std::vector<std::vector<int>> numbers) {
    std::set<std::vector<int>> unique_numbers;
    for (const auto& number : numbers)
        unique_numbers.insert(number);
    return {unique_numbers.begin(), unique_numbers.end()};
}