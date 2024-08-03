#include <string>
#include <vector>
#include <cassert>

using namespace std;

vector<string> all_prefixes(string str){
    vector<string> prefixes;
    string prefix = "";
    for (char c : str) {
        prefix += c;
        prefixes.push_back(prefix);
    }
    return prefixes;
}

bool issame(const vector<string>& a, const vector<string>& b){
    if(a.size() != b.size())
        return false;
    for(size_t i=0; i < a.size(); i++){
        if(a[i] != b[i])
            return false;
    }
    return true;
}

int main() {
    assert(issame(all_prefixes("WWW"), vector<string>({"W", "WW", "WWW"})));
  
    return 0;
}