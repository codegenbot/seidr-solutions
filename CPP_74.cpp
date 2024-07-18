#include <string>
#include <vector>

bool issame(const vector<string>& a, const vector<string>& b) {
    int total_chars1 = 0;
    int total_chars2 = 0;
    
    for(const string& s : a){
        total_chars1 += s.size();
    }
    
    for(const string& s : b){
        total_chars2 += s.size();
    }
    
    if(total_chars1 < total_chars2){
        return true;
    }
    
    return false;
}