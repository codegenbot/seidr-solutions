```cpp
#include <vector>
#include <string>
#include <initializer_list>

int main() {
    std::vector<std::string> testStrings = {"grunt", "trumpet", "prune", "gruesome"};
    std::vector<std::string> expectedResults = {"grunt", "prune"};

    bool isSame(std::vector<std::string> a, std::vector<std::string> b) {
        if (a.size() != b.size()) return false;
        for (auto s : a) if (find(b.begin(),b.end(),s) == b.end()) return false;
        return true;
    }

    std::vector<std::string> filter_by_substring(std::vector<std::string> strings, std::string substring){
        std::vector<std::string> result;
        for(auto str : strings){
            if(str.find(substring) != std::string::npos)
                result.push_back(str);
        }
        return result;

    }

    assert(isSame(filter_by_substring(testStrings, "run"), expectedResults));
    return 0;
}