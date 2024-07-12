#include <string>
#include <vector>
#include <cassert>

int Strongest_Extension(const std::pair<std::string, std::vector<std::string>>& extension) {
    if (extension.second.empty()) {
        return -1;
    }
    for (const auto& s : extension.second) {
        if (!s.empty()) {
            return 0;
        }
    }
    return 1;
}

int run() {
    std::vector<std::pair<std::string, std::string>> extensions;
    extensions.push_back({"Sp", "671235"}); 
    extensions.push_back({"Bb", ""});
    assert(Strongest_Extension({extensions[0].first, {extensions[0].second}}) == 0);
    return 0;
}