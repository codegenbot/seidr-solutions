#include <vector>
#include <cassert>
#include <string>

// Implement the issame function logic here

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    // If the sizes of both vectors are not equal,
    // they can't be the same
    if (a.size() != b.size()) {
        return false;
    }

    // Check if corresponding strings are different
    for (size_t i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }

    // The vectors are the same
    return true;
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
    assert(issame(total_match({"this"}, {}), {}));
    
    // Add more test cases to validate the code
    
    return 0;
}