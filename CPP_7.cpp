#include <vector>
#include <string>

std::vector<string> filter_by_substring(std::vector<string> strings, string substring){
    std::vector<string> result;
    for (const auto& s : strings) {
        if (s.find(substring) != string::npos) {
            result.push_back(s);
        }
    }
    return result;
}

int main() {
    assert(filter_by_substring({"grunt", "trumpet", "prune", "gruesome"}, "run") == std::vector<std::string>({"grunt", "prune"}) );
    return 0;
}