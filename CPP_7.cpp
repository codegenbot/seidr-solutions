```cpp
#include <initializer_list>
#include <vector>
#include <string>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return a == b;
}

std::vector<std::string> filter_by_substring(std::vector<std::string> words, const std::string& sub) {
    std::vector<std::string> result;
    for (const auto& word : words) {
        if (word.find(sub) != std::string::npos)
            result.push_back(word);
    }
    return result;
}

using namespace std;

int main() {
    vector<string> result = filter_by_substring({"grunt", "trumpet", "prune", "gruesome"}, "run");
    assert(issame({result.begin(), result.end()}, {{"grunt", "prune"}.begin(), {"grunt", "prune"}.end()}));
    return 0;
}