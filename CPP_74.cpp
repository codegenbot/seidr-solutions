#include <vector>
#include <string>

bool issame(const std::vector<std::vector<std::string>>& a, const std::vector<std::vector<std::string>>& b) {
    if (b.size() == 0) return true;
    return (a.size() == b.size()) && std::equal(a.begin(), a.end(), b.begin());
}

auto total_match = [](const std::vector<std::vector<std::string>>& v) {
    int sum = 0;
    for (const auto& vec : v) {
        for (const auto& s : vec) {
            sum += s.size();
        }
    }
    return sum;
};

int main() {
    int sum1 = 0;
    int sum2 = 0;

    std::vector<std::vector<std::string>> lst1 = {{"this"}, {"is"}};
    std::vector<std::vector<std::string>> lst2 = {};

    if (!lst2.empty()) {
        sum1 = total_match(lst1);
        sum2 = total_match(lst2);
    }
    return 0;
}