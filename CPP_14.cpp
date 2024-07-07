#include <initializer_list>

#include <vector>
#include <string>

bool issame(std::vector<std::string>& a, std::vector<std::string>& b) {
    if (a.size() != b.size())
        return false;
    for (int i = 0; i < a.size(); i++)
        if (a[i] != b[i])
            return false;
    return true;
}

std::vector<std::string> a = {"W", "WW", "WWW"};
std::vector<std::string> b = all_prefixes("WWW");

std::vector<std::vector<std::string>> all_prefixes(const std::string& str) {
    std::vector<std::vector<std::string>> result({{""}});
    for (int i = 1; i <= str.length(); i++) {
        for (const auto& prefix : {str.substr(0, i)}) {
            for (auto &v : result) v.push_back(prefix);
        }
    }
    return result;
}