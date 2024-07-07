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

    bool total_match = issame(lst1, lst2);

    if (sum1 < sum2) {
        for (const auto& v : lst1) {
            for (const std::string& s : v) {
                // Your logic here
                std::cout << s << " ";
            }
            std::cout << "\n";
        }
    } else if (sum1 > sum2) {
        for (const auto& v : lst2) {
            for (const std::string& s : v) {
                // Your logic here
                std::cout << s << " ";
            }
            std::cout << "\n";
        }
    } else {
        for (const auto& v : lst1) {
            for (const std::string& s : v) {
                // Your logic here
                std::cout << s << " ";
            }
            std::cout << "\n";
        }
    }
    return 0;
}