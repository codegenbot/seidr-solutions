#include <vector>

bool issame(std::vector<int> a, std::vector<int> b){
    return a == b;
}

// Define 'parse_music' function if needed
std::vector<int> parse_music(std::string music){
    std::vector<int> result;
    
    for(char c : music){
        result.push_back(static_cast<int>(c));
    }
    
    return result;
}