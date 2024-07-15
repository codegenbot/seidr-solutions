#include <vector>
#include <string>
#include <cassert>

std::vector<std::string> select_words(std::string s, int n) {
    // Implement your logic for selecting words here
}

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    std::string s = "hello world my name is alice";
    int n = 2;
    std::vector<std::string> actual_result = select_words(s, n);
    std::vector<std::string> expected_result = {"hello", "world", "alice"};

    assert(issame(actual_result, expected_result));

    return 0;
}