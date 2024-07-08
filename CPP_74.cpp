#include <vector>
#include <string>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    if (a.size() != b.size()) 
        return false;
        
    for (int i = 0; i < a.size(); i++) 
        if (a[i] != b[i]) 
            return false;

    return true;
}

std::vector<std::string> total_match(std::vector<std::string> input, std::vector<std::string> pattern) {
    for(int i = 0; i < input.size(); i++) {
        if(pattern[i] == "") {
            continue;
        } else {
            if(input[i].find(pattern[i]) == std::string::npos) {
                return {};
            }
        }
    }
    return input;
}

int main() {
    // Test the function
    assert(issame(total_match({"this"}, {}), {}));
    
    return 0;
}