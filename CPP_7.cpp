#include <vector>
using namespace std;

bool issame(vector<string> a, vector<string> b) {
    if(a.size() != b.size()) return false;
    for(string s : a){
        if(find(b.begin(),b.end(),s) == b.end()) return false;
    }
    return true;
}

int main(){
    vector<string> result = filter_by_substring({"grunt", "trumpet", "prune", "gruesome"}, "run");
    assert (issame(result, {"grunt", "prune"}));
}