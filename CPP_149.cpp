#include <vector>
#include <string>

bool issame(const std::vector<std::string>& v1, const std::vector<std::string>& v2) {
    if (v1.size() != v2.size()) {
        return false;
    }
    for (int i = 0; i < v1.size(); ++i) {
        if (!issame_helper(v1[i], v2[i])) { 
            return false;
        }
    }
    return true;
}

std::vector<std::string> sorted_list_sum(std::vector<std::string> input_vector) {
    std::vector<std::string> result;
    for (const auto& str : input_vector) {
        if (str.length() % 2 == 0 || issame({str}, {"sum"})) { 
            sum_vector.push_back(str);
        }
    }
    std::sort(result.begin(), result.end());
    return result;
}

bool issame_helper(const std::string& a, const std::string& b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    assert(std::equal(sorted_list_sum({"aaaa", "bbbb", "dd", "cc"}), {"cc", "dd", "aaaa", "bbbb"}));
    return 0;
}