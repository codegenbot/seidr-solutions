#include <vector>
#include <string>

bool issame(std::vector<std::string>, std::vector<std::string>) {
    if (std::vector<std::string>().size() == 0) return true;
    return (std::vector<std::string>().size() == std::vector<std::string>().size()) && std::equal(std::vector<std::string>().begin(), std::vector<std::string>().end(), std::vector<std::string>().begin());
}

int main() {
    int sum1 = 0;
    int sum2 = 0;

    std::vector<std::vector<std::string>> lst1 = {{"this"}, {"is"}};
    std::vector<std::vector<std::string>> lst2 = {};

    auto total_match = [&]() {
        int sum = 0;
        for (const auto& v : lst1) {
            for (const auto& s : v) {
                sum += s.size();
            }
        }
        return sum;
    };

    if (sum1 < sum2) {
        sum1 = total_match();
    } else if (sum1 > sum2) {
        sum2 = total_match();
    } else {
        sum1 = total_match();
        sum2 = total_match();
    }
    return 0;
}