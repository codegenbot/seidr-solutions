```cpp
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
            result.push_back({{s}}); // Add a vector here to store single element
        }
    }
    return result;

}

int main() {
    std::vector<std::string> str = {"grunt", "trumpet", "prune", "gruesome"};
    std::string substr = "run";
    std::vector<std::vector<std::string>> filtered = filter_by_substring(str, substr);
    if (issame(filtered, {{ "grunt" }, { "prune" }})) {
        std::cout << "Test passed." << std::endl;
    } else {
        std::cout << "Test failed." << std::endl;
    }
}