#include <string>
#include <vector>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        int num1 = stoi(a[i]);
        int num2 = stoi(b[i]);
        int sum = num1 + num2;
        int sumSorted = std::stoi(a[i] + b[i]);
        if (sum != sumSorted) return false;
    }
    return true;
}

int main() {
    assert(issame({{"aaaa", "bbbb"}, {"cccc", "ddd"}}, {{"cccc", "ddd"}, {"aaaa", "bbbb"}}));
}