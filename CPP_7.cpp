```cpp
#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

int main() {
    assert(std::equal(filter_by_substring({"grunt", "trumpet", "prune", "gruesome"}, "run"), {"grunt", "prune"}));
    std::vector<std::string> strings = {"grunt", "trumpet", "prune", "gruesome"};
    std::string substring = "run";
    vector<string> result = filter_by_substring(strings, substring);
    for (const auto& str : result) {
        if (!issame({str}, {substring})) {
            cout << str << endl;
        }
    }
}