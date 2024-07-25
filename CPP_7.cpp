#include <vector>
#include <string>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    if(a.size() != b.size())
        return false;
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i])
            return false;
    }
    return true;
}

std::vector<std::vector<std::string>> filter_by_substring(std::vector<std::string> str, std::string substr) {
    std::vector<std::vector<std::string>> result;
    for (const auto& s : str) {
        if (s.find(substr) != std::string::npos) {
            result.push_back({{s}}); 
        }
    }
    return result;

}

int main() {
    std::vector<std::string> str = {"grunt", "trumpet", "prune", "gruesome"};
    std::string substr = "run";
    auto filtered = filter_by_substring(str, substr);
    
    for (const auto& item : filtered) {
        for (const auto& word : item) {
            std::cout << word << " ";
        }
        std::cout << "\n";
    }
}