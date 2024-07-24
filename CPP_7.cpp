#include <vector>
#include <string>

// Function prototype
std::vector<std::string> filter_by_substring(std::vector<std::string> strings, std::string substring);

int main() {
    // Correct usage of function
    std::vector<std::string> result = filter_by_substring({"grunt", "trumpet", "prune", "gruesome"}, "run");
    bool same = issame(result, {"grunt", "prune"});
    
    return 0;
}

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    if(a.size() != b.size()) return false;
    for(int i=0; i<a.size(); i++) {
        if(std::find(b.begin(), b.end(), a[i]) == b.end())
            return false;
    }
    return true;
}

std::vector<std::string> filter_by_substring(std::vector<std::string> strings, std::string substring){
    std::vector<string> result;
    for(string s : strings){
        if(s.find(substring) != string::npos)
            result.push_back(s);
    }
    return result;
}