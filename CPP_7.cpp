#include <vector>
#include <string>

// Function prototype
std::vector<std::string> filter_by_substring(std::vector<std::string> strings, std::string substring);

int main() {
    // Correct usage of function
    assert(filter_by_substring({"grunt", "trumpet", "prune", "gruesome"}, "run") == ({ "grunt", "prune" }));
    
    return 0;
}

std::vector<std::string> filter_by_substring(std::vector<std::string> strings, std::string substring){
    std::vector<std::string> result;
    for(string s : strings){
        if(s.find(substring) != string::npos)
            result.push_back(s);
    }
    return result;
}