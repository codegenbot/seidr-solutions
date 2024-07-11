#include <vector>
#include <string>

bool issame(vector<string> a,vector<string>b){
    for(auto& str : a) {
        if(std::find(b.begin(), b.end(), str) == b.end())
            return false;
    }
    return true;
}

int main() {
    assert (issame(filter_by_substring({"grunt", "trumpet", "prune", "gruesome"}, "run") ,{"grunt", "prune"}));
    return 0;
}