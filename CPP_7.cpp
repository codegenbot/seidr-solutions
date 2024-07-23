```cpp
#include <vector>
#include <string>

bool issame(vector<string> a,vector<string> b){
    if(a.size() != b.size()) {
        return false;
    }
    for(int i=0; i<a.size(); i++) {
        if(find(b.begin(),b.end(),a[i]) == b.end())
            return false;
    }
    return true;
}

vector<string> filter_by_substring(vector<string> words, string sub){
    vector<string> result;
    for(auto w : words) {
        if(w.find(sub) != string::npos)
            result.push_back(w);
    }
    return result;
}

int main() {
    assert (issame(filter_by_substring({"grunt", "trumpet", "prune", "gruesome"}, "run") ,{"grunt", "prune"}));
    return 0;
}