```cpp
#include <string>
#include <vector>

int main() {
    std::vector<std::string> a;
    std::cout << "Enter strings (press Enter after each):";
    std::string input;
    while(std::getline(std::cin, input)) {
        if(input.size() > 0) {
            a.push_back(input);
        }
    }

    std::vector<std::string> b = filter_by_prefix(a, "");
    
    bool same = issame(a, b);

    if(!same) std::cout << "Strings are not the same." << std::endl;
    else std::cout << "Strings are the same." << std::endl;
    
    return 0;
}

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b){
    if(a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i]) return false;
    }
    return true;
}

std::vector<std::string> filter_by_prefix(std::vector<std::string> strings, const std::string& prefix){
    std::vector<std::string> result;
    for(string s : strings){
        if(s.find(prefix) == 0) {
            result.push_back(s);
        }
    }
    return result;
}