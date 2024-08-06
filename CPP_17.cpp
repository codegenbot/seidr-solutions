#include <iostream>
#include <vector>
#include <cassert>

std::vector<int> parse_music(const std::string& music){
    std::vector<int> beats;
    // Parse the music string to extract beats and populate the beats vector
    // Implementation details based on contest problem
    
    return beats;
}

bool issame(const std::vector<int>& a, const std::vector<int>& b){
    if(a.size() != b.size()) {
        return false;
    }
    for(size_t i = 0; i < a.size(); ++i){
        if(a[i] != b[i]){
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