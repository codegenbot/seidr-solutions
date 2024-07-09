#include <vector>
#include <string>
#include <sstream>

std::vector<std::pair<int, std::string>> select_words(const std::string& input, int n) {
    std::vector<std::pair<int, std::string>> result;
    std::istringstream iss(input);
    std::string str;

    int count = 0;
    while (std::getline(iss, str, ' ')) {
        if (count++ % n == 0) {
            result.emplace_back(count, str);
        }
    }

    return result;
}

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

int main() {
    std::vector<std::pair<int, std::string>> expected = {{1, "b"}, {1, "c"}, {1, "d"}, {1, "f"}};
    assert(issame(select_words("a b c d e f", 1), {"b", "c", "d", "f"}));
    return 0;
}