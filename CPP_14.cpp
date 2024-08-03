#include <vector>
#include <string>
#include <cassert>

std::vector<std::string> b(std::string str) {
    std::vector<std::string> prefixes;
    std::string prefix = "";
    for (char c : str) {
        prefix += c;
        prefixes.push_back(prefix);
    }
    return prefixes;
}

bool issame(std::vector<std::string> vec_a, std::vector<std::string> vec_b) {
    return vec_a == vec_b;
}

int main() {
    std::vector<std::string> all_prefixes = b("WWW");
    assert(issame(all_prefixes, { "W", "WW", "WWW" }));
    return 0;
}