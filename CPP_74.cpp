#include <vector>
#include <cassert>
#include <string>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    // Implement the issame function logic here
    // Use the std::equal function to check if the vectors are the same
    return std::equal(a.begin(), a.end(), b.begin(), b.end());
}

std::vector<std::string> total_match(std::vector<std::string> lst1, std::vector<std::string> lst2) {
    int totalChars1 = 0;
    int totalChars2 = 0;
    
    for (auto str : lst1) {
        totalChars1 += str.size();
    }
    
    for (auto str : lst2) {
        totalChars2 += str.size();
    }
    
    if (totalChars1 < totalChars2) {
        return lst1;
    }
    else {
        return lst2;
    }
}

int main() {
    assert (issame(total_match({"this"}, {}), {}));
    
    // Add more test cases to validate the code
    
    return 0;
}