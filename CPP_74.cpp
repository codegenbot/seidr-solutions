#include <vector>
#include <string>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    if (b.size() == 0) return true;
    return (a.size() == b.size()) && std::equal(a.begin(), a.end(), b.begin());
}

int main() {
    int sum1 = 0;
    int sum2 = 0;

    // Define your input data or variables
    std::vector<std::vector<std::string>> lst1 = {{"this"}, {"is"}};
    std::vector<std::vector<std::string>> lst2 = {};

    auto total_match = [](const std::vector<std::string>& vec) {
        int sum = 0;
        for (const auto& v : vec) {
            for (const std::string& s : v) {
                sum += s.size();
            }
        }
        return sum;
    };

    if (sum1 < sum2) {
        sum1 = total_match(lst1);
    } else if (sum1 > sum2) {
        sum2 = total_match(lst2);
    } else {
        sum1 = total_match(lst1);
        sum2 = total_match(lst2);
    }
    return 0;
}