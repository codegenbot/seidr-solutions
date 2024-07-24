```cpp
#include <vector>
#include <string>

bool issame(vector<string> a,vector<string>b){
    for(string s : b){
        bool found = false;
        for(string str : a){
            if(str.find(s) != string::npos){
                found = true;
                break;
            }
        }
        if(!found)
            return false;
    }
    return true;
}

int main(){
    assert (issame(filter_by_substring({"grunt", "trumpet", "prune", "gruesome"}, "run") ,{"grunt", "prune"}));
}