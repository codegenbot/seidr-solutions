#include <vector>
#include <string>

// Function prototype
std::vector<std::string> filter_by_substring(std::vector<std::string> strings, std::string substring);
bool issame(std::vector<std::string> a, std::vector<std::string> b);

int main() {
    // Correct usage of function
    assert(issame(filter_by_substring({"grunt", "trumpet", "prune", "gruesome"}, "run"), {"grunt", "prune"}));
    
    return 0;
}

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    if(a.size() != b.size())
        return false;
    for(int i = 0; i < a.size(); i++)
        if(std::find(b.begin(), b.end(), a[i]) == b.end())
            return false;
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