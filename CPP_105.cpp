#include <vector>
#include <string> // Add this line to include the string header

std::vector<std::string> by_length(std::vector<int> arr);

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) return false;
    }
    return true;
}