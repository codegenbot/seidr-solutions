```c
#include <vector>
#include <string>

bool issame(std::vector<std::string> a) {
    if (a.size() == 0) {
        return true;
    }
    for (int i = 1; i < a.size(); i++) {
        if (a[0] != a[i]) {
            return false;
        }
    }
    return true;
}

std::vector<std::string> words_string(std::string s, std::vector<std::string> expected) {
    if (!issame(expected)) {
        return {};
    }
    std::vector<std::string> result = words_string(s);
    for (int i = 0; i < expected.size(); i++) {
        if (result[i] != expected[i]) {
            return {};
        }
    }
    return result;
}

std::vector<std::string> words_string(std::string s) {
    return std::vector<std::string>(std::split(s, ' '));
}

int main() {
    assert(issame(words_string("ahmed     , gamal", {"ahmed", "gamal"})));
}