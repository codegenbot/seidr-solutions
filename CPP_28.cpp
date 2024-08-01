#include <unordered_set>

std::string concatenateNoDuplicates(const std::vector<std::string>& strings){
    std::unordered_set<char> uniqueLetters;
    std::string result;
    for(const std::string& s : strings){
        for(char c : s){
            if(uniqueLetters.find(c) == uniqueLetters.end()){
                result += c;
                uniqueLetters.insert(c);
            }
        }
    }
    return result;
}

assert(concatenateNoDuplicates({"x", "y", "z", "w", "k"}) == "xyzwk");