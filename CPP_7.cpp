#include <vector>
#include <string>

bool issame(std::vector<std::string> a, std::vector<std::string> b){
    return a == b;
}

void filter_by_substring(std::vector<std::string>& vec, std::string substr) {
    vec.erase(std::remove_if(vec.begin(), vec.end(),
                          [substr](const std::string& str) { return str.find(substr) == std::string::npos; }),
              vec.end());
}

int main() {
    // Main function logic here
    
    return 0;
}