#include <vector>
#include <string>
#include <cassert>

std::vector<std::string> issame(std::vector<std::string> a, std::vector<std::string> b) {
    int total_chars1 = 0;
    int total_chars2 = 0;
    
    for(const std::string& s : a){
        total_chars1 += s.size();
    }
    
    for(const std::string& s : b){
        total_chars2 += s.size();
    }
    
    if(total_chars1 < total_chars2){
        return a;
    }
    
    return b;
}