#include <cassert>
#include <string>
#include <initializer_list>
#include <vector>

int odd_count(const std::initializer_list<std::string>& strings) {
    int count = 0;
    for (const std::string& str : strings) {
        for (char c : str) {
            if ((c - '0') % 2 != 0) {
                count++;
            }
        }
    }
    return count;
}

bool issame(int result, const std::vector<std::string>& expected_output) {
    if (result != expected_output.size()) {
        return false;
    }
    for (size_t i = 0; i < expected_output.size(); ++i) {
        if (result != std::stoi(expected_output[i])) {
            return false;
        }
    }
    return true;
}

void test_issame() {
    assert(issame(odd_count({"271", "137", "314"}), { "2", "2", "3" }));
}

int main() {
    test_issame();
    return 0;
}