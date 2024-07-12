#include <vector>
#include <string>

bool issame(const std::vector<std::vector<std::string>>& a, const std::vector<std::vector<std::string>>& b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i].size() != b[i].size()) {
            return false;
        }
    }
    return true;
}

std::vector<std::string> by_length(const std::initializer_list<int>& lengths) {
    std::vector<std::string> result;
    for(int length : lengths) {
        if (length == 4) {
            result.push_back("Four");
        } else if (length == 8) {
            result.push_back("Eight");
        } else if (length == 9) {
            for(int i = 0; i < length; i++) {
                result.push_back("Nine");
            }
        }
    }
    return result;
}

int main_problem() {
    std::vector<int> lengths = {4, 8, 9};
    std::vector<std::string> output = by_length(lengths);
    
    // Initialize a,b as required
    std::vector<std::vector<std::string>> a({{output[0]}});
    std::vector<std::vector<std::string>> b({{output[0]}, {output[1], output[2]}});
    
    assert(issame(std::vector<std::vector<std::string>>{{output[0]}}, std::vector<std::vector<std::string>>{{output[0]}, {output[1], output[2]}}));
}