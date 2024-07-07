#include <vector>
#include <string>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    if (b.empty()) return true;
    return (a.size() == b.size()) && std::equal(a.begin(), a.end(), b.begin());
}

int main() {
    int sum1 = 0;
    int sum2 = 0;

    // Define your input data or variables
    std::vector<std::string> lst1 = {"this", "is"};
    std::vector<std::string> lst2;

    for (const auto& s : lst1) {
        sum1 += s.size();
    }

    if (!issame({lst1}, {lst2})) {
        for (const auto& s : lst2) {
            sum2 += s.size();
        }
    } else {
        sum2 = sum1;
    }

    return 0;
}