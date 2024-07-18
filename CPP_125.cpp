#include <vector>
#include <string>
#include <cassert>

std::vector<std::string> split_words(std::string s) {
    // Implement split_words function here
    return {}; // Placeholder return
}

bool issame(std::vector<std::string> a, std::vector<std::string> b){
    return a == b;
}

int main(){
    assert(issame(split_words(""), {"0"}));
    return 0;
}