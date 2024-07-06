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
    std::vector<std::string> result = words_split(s);
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

std::vector<std::string> words_split(std::string s) {
    std::vector<std::string> result = std::vector<std::string>();
    std::size_t pos = 0, prev = 0;

    while ((pos = s.find(" ", prev)) != std::string::npos) {
        result.push_back(s.substr(prev, (pos - prev)));
        prev = pos + 1;
    }

    if (prev < s.size()) {
        result.push_back(s.substr(prev));
    }

    return result;
}

int main() {
    assert(issame(words_string("ahmed     , gamal", {"ahmed", "gamal"})));
}