#include <vector>
#include <string>

std::vector<std::string> filter_by_prefix(std::vector<std::string> strings, std::string prefix) {
    vector<string> result;
    for (string str : strings) {
        if (str.find(prefix) == 0) {
            result.push_back(str);
        }
    }
    return result;