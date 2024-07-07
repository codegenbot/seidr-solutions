#include <vector>
#include <string>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    if(a.size() != b.size())
        return false;
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i])
            return false;
    }
    return true;
}

std::vector<std::string> filter_by_substring(const std::vector<std::string>& strings, const std::string& substring) {
    std::vector<std::string> result;
    for(const auto& s : strings){
        if(s.find(substring) != std::string::npos)
            result.push_back(s);
    }
    return result;

}

int main() {
    std::vector<std::string> words = {"grunt", "trumpet", "prune", "gruesome"};
    bool same = issame(filter_by_substring(words, "run"), {"grunt", "prune"});
    if (!same) {
        return 1;
    }
    return 0;
}