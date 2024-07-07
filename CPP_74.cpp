#include <vector>
#include <string>

bool issame(const std::vector<std::vector<std::string>>& a, const std::vector<std::vector<std::string>>& b) {
    if (b.size() == 0) return true;
    return (a.size() == b.size()) && std::equal(a.begin(), a.end(), b.begin());
}

auto total_match = [](const std::vector<std::vector<std::string>>& v1, const std::vector<std::vector<std::string>>& v2) {
    int sum1 = 0;
    for (const auto& s : v1) {
        for (const auto& str : s) {
            sum1 += str.size();
        }
    }
    int sum2 = 0;
    for (const auto& s : v2) {
        for (const auto& str : s) {
            sum2 += str.size();
        }
    }
    return sum1 + sum2;
};

int main() {
    std::vector<std::vector<std::string>> lst1 = {{"this"}, {"is"}};
    std::vector<std::vector<std::string>> lst2 = {};

    int sum1 = total_match(lst1, {});
    return 0;
}