#include <vector>
#include <algorithm>
#include <string>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    return std::stable_partition(a.begin(), a.end()) == std::stable_partition(b.begin(), b.end());
}

int main() {
    auto filter_by_substring = [](const std::vector<std::string>& v, const std::string& substring) {
        return std::vector<std::string>(std::count_if(v.begin(), v.end(), [&](const auto& str) { 
            return str.find(substring) != std::string::npos; 
        }));
    };

    // Test filter_by_substring
    std::cout << "Filtering for substring 'run' results in: ";
    for (const auto& s : filter_by_substring({{"grunt", "trumpet", "prune", "gruesome"}}, "run")) {
        std::cout << s << " ";
    }
    std::cout << std::endl;

    // Test issame function
    assert(issame(filter_by_substring({{"grunt", "trumpet", "prune", "gruesome"}}, "run"), {"grunt", "prune"}));

    return 0;
}