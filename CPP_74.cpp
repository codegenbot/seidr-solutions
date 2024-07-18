#include <string>
#include <vector>

bool issame(const std::vector<std::string>& lst1, const std::vector<std::string>& lst2){
    int total_chars1 = 0;
    int total_chars2 = 0;
    
    for(const std::string& s : lst1){
        total_chars1 += s.size();
    }
    
    for(const std::string& s : lst2){
        total_chars2 += s.size();
    }
    
    if(total_chars1 < total_chars2){
        return true;
    }
    
    return false;
}