#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b){
    if(a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); i++){
        bool found = false;
        for(string s : filter_by_substring({a[i],b[i]}, "run")){
            if(s.find("run") != string::npos) {
                found = true;
                break;
            }
        }
        if(!found) return false;
    }
    return true;
}

int main(){
    assert (issame(filter_by_substring({"grunt", "trumpet", "prune", "gruesome"}, "run") ,{"grunt", "prune"}));
}