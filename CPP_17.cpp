#include <iostream>
#include <vector>
#include <cassert>

std::vector<int> parse_music(const std::string& music){
    std::vector<int> beats;
    // Complete the function implementation here
    return beats;
}

bool issame(const std::vector<int>& a, const std::vector<int>& b){
    if (a.size() != b.size()) {
        return false;
    }
    
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    
    return true;
}

int main(){
    assert(issame(parse_music("o| .| o| .| o o| o o|"), {2, 1, 2, 1, 4, 2, 4, 2}));
    std::cout << "Test passed." << std::endl;
    return 0;
}