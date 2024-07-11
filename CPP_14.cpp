#include <vector>
#include <string>

vector<std::string> all_prefixes(std::string str) {
    vector<std::string> result;
    for (int i = 1; i <= str.length(); i++) {
        result.push_back(str.substr(0, i));
    }
    return result;
}