#include <vector>
#include <string>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
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
            for (const string& s : v) {
                // Your logic here
            }
        }
    } else if (sum1 > sum2) {
        for (const auto& v : lst2) {
            for (const string& s : v) {
                // Your logic here
            }
        }
    } else {
        for (const auto& v : lst1) {
            for (const string& s : v) {
                // Your logic here
            }
        }
    }
    return 0;
}