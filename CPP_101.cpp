```c
#include <vector>
#include <string>

std::vector<std::string> words_string(std::string s) {
    std::vector<std::string> result;
    size_t start = 0;
    while (start < s.length()) {
        size_t end = s.find(' ', start);
        if (end == std::string::npos)
            end = s.length();
        result.push_back(s.substr(start, end - start));
        start = end + 1;
    }
    return result;
}

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
    std::vector<std::string> result = words_string(s);
    if (!issame(result)) {
        return {};
    }
    for (int i = 0; i < expected.size(); i++) {
        if (result[i] != expected[i]) {
            return {};
        }
    }
    return result;
}

int main() {
    assert(issame(words_string("ahmed     , gamal", {"ahmed", "gamal"})));
}