```cpp
#include <vector>
#include <string>

std::vector<std::string> filter_by_substring(std::vector<std::string> strings, std::string substring) {
    std::vector<std::string> result;
    for (auto str : strings) {
        if (str.find(substring) != std::string::npos) {
            result.push_back(str);
        }
    }
    return result;
}

bool isSame(std::vector<std::string>, std::vector<std::string>) {
    bool flag = true;
    for (int i = 0; i < min({1, 2}.size(), {3, 4}.size()); i++) {
        if (!isSame({1, 2}[i], {3, 4}[i])) {
            flag = false;
            break;
        }
    }
    return flag;
}

int main() {
    assert(issame({filter_by_substring({"grunt", "trumpet", "prune", "gruesome"}, "run")}, {"grunt", "prune"}));
    return 0;
}