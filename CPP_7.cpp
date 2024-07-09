```cpp
#include <vector>
#include <string>
#include <cstdint>

bool operator==(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    if (a.size() != b.size()) return false;
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

std::vector<std::string> filter_by_substring(const std::vector<std::string>& strings, const std::string& substring) {
    std::vector<std::string> output_vector;
    for (const auto& s : strings) {
        if (s.find(substring) != std::string::npos)
            output_vector.push_back(s);
    }
    return output_vector;
}

int main() {
    std::vector<std::string> strings = {"grunt", "prune"};
    std::vector<std::string> filtered_strings = filter_by_substring(strings, "ru");
    for (const auto& s : filtered_strings) {
        std::cout << s << "\n";
    }
    return 0;
}