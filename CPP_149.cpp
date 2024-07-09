#include <vector>
#include <string>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (sorted_list_sum({a[i], b[i]})[0] != sorted_list_sum({b[i], a[i]})[0]) {
            return false;
        }
    }
    return true;
}

int main() {
    std::vector<std::string> input = {"aaaa", "bbbb", "dd", "cc"};
    std::vector<std::string> expected = {"cc", "dd", "aaaa", "bbbb"};

    assert(issame(input, expected) == true);

    return 0;
}