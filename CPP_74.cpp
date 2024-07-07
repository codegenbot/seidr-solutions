#include <vector>
#include <string>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    if (b.size() == 0) return true;
    return (a.size() == b.size()) && std::equal(a.begin(), a.end(), b.begin());
}

int main() {
    int sum1 = 0;
    int sum2 = 0;

    // Define your input data or variables
    std::vector<std::vector<std::string>> lst1 = {{"this"}, {"is"}};
    std::vector<std::vector<std::string>> lst2 = {};

    if (sum1 < sum2) {
        for (const auto& v : lst1) {
            for (const std::string& s : v) {
                sum1 += s.size();
            }
        }
    } else if (sum1 > sum2) {
        for (const auto& v : lst2) {
            for (const std::string& s : v) {
                sum2 += s.size();
            }
        }
    } else {
        for (const auto& v : lst1) {
            for (const std::string& s : v) {
                sum1 += s.size();
                sum2 += s.size();
            }
        }
    }
    return 0;
}