#include <vector>
#include <string>
using namespace std;

bool issame(vector<string> a,vector<string>b){
    if(a.size()!=b.size())return false;
    for(auto &s : a) {
        bool found = false;
        for(auto &t : b) {
            if(s==t)found=true; 
            if(!found)return false;
        }
    }
    return true;
}

int main() {
    vector<string> result = filter_by_substring({"grunt", "trumpet", "prune", "gruesome"}, "run");
    assert(issame(result,{"grunt", "prune"}));
    return 0;
}