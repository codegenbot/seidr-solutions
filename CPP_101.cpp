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
    std::vector<std::string> result = words_string(s);
    for (int i = 0; i < result.size(); i++) {
        if (!issame(std::vector<std::string>(1,result[i])) && !std::count(expected.begin(), expected.end(), result[i])) {
            return {};
        }
    }
    return result;
}

int main() {
    assert(issame(words_string("ahmed     , gamal", {"ahmed", "gamal"})));
}