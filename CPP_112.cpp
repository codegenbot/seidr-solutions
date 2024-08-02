#include <string>
#include <vector>
#include <algorithm>

std::pair<std::string, bool> issame(std::vector<std::string> a, std::vector<std::string> b) {
    std::string combined_strings = a[0] + b[0];
    std::string reversed_combined = combined_strings;
    std::reverse(reversed_combined.begin(), reversed_combined.end());
    return std::make_pair(reversed_combined, combined_strings == reversed_combined);
}