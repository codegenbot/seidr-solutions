#include <vector>
#include <string>
#include <cassert>

bool issame(vector<string> a, vector<string> b){
    assert(a.size() == b.size());

    for(int i = 0; i < a.size(); i++){
        if(a[i] != b[i]){
            return false;
        }
    }
    return true;
}

vector<string> total_match(vector<string> lst1, vector<string> lst2){
    int totalChars1 = 0;
    int totalChars2 = 0;
    
    for(string s : lst1){
        totalChars1 += s.length();
    }
    
    for(string s : lst2){
        totalChars2 += s.length();
    }
    
    if(totalChars1 < totalChars2){
        return lst1;
    }
    else{
        return lst2;
    }
}