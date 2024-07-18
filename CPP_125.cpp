#include <vector>
#include <string>
#include <cassert>

bool issame(std::vector<std::string> a, std::vector<std::string> b){
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

std::vector<std::string> split_words(std::string txt){
    // Your existing implementation remains unchanged
}

int main() {
    assert(issame(split_words(""), {"0"}));
    // Add more test cases here
    return 0;
}