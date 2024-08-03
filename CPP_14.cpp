#include <vector>
#include <string>

bool issame(std::vector<std::string> a, std::vector<std::string> b){
    return a == b; // Compare vectors for equality
}

std::vector<std::string> all_prefixes(std::string str){
    std::vector<std::string> result;
    std::string prefix = "";
    for (char c : str) {
        prefix += c;
        result.push_back(prefix);
    }
    return result;
}

int main(){
    assert (issame(all_prefixes("WWW"), {"W", "WW", "WWW"}));
    // Add more test cases if needed

    return 0;
}