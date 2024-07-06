```cpp
#include <vector>
#include <string>

bool issame(const std::vector<std::string>& vec1, const std::vector<std::string>& vec2) {
    if (vec1.size() != vec2.size()) {
        return false;
    }
    for (int i = 0; i < vec1.size(); ++i) {
        bool found = false;
        for (const auto& str : vec2) {
            if (issame({vec1[i]}, {str})) {
                found = true;
                break;
            }
        }
        if (!found) {
            return false;
        }
    }
    return true;
}

bool compare(const std::vector<std::string>& vec1, const std::vector<std::string>& vec2) {
    if (vec1.size() != vec2.size()) {
        return false;
    }
    for (int i = 0; i < vec1.size(); ++i) {
        bool found = false;
        for (const auto& str : vec2) {
            if (issame({vec1[i]}, {str})) {
                found = true;
                break;
            }
        }
        if (!found) {
            return false;
        }
    }
    return true;
}

std::vector<std::string> sorted_list_sum(std::vector<std::string> lst) {
    std::vector<std::string> result;
    for (const auto& str : lst) {
        if (str.length() % 2 == 0 || issame({str}, {"sum"})) {
            result.push_back(str);
        }
    }
    std::sort(result.begin(), result.end());
    return result;
}

int main() {
    assert(std::equal(sorted_list_sum({{"aaaa"}, {"bbbb"}, {"dd"}, {"cc"}}), {{"cc"}, {"dd"}, {"aaaa"}, {"bbbb"}}));
    return 0;
}