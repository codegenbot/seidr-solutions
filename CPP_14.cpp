#include <iostream>  
#include <vector>  
#include <string>  
#include <cassert>  
  
using namespace std;  
  
vector<string> all_prefixes(string str){  
    vector<string> result;  
    for (int i = 1; i <= str.size(); ++i) {  
        result.push_back(str.substr(0, i));  
    }  
    return result;  
}  
  
bool issame(vector<string> a, vector<string> b){  
    if(a.size() != b.size()) {  
        return false;  
    }  
    for(int i=0; i<a.size(); i++) {  
        if(a[i] != b[i]) {  
            return false;  
        }  
    }  
    return true;  
}  
  
int main() {  
    assert(issame(all_prefixes("WWW"), {"W", "WW", "WWW"}));  
      
    return 0;  
}