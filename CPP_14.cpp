#include <vector>
#include <string>
#include <cassert>

using namespace std;

vector<string> all_prefixes(string str){
    vector<string> result;
    string prefix = "";
    for(char c : str){
        prefix += c;
        result.push_back(prefix);
    }
    return result;
}

bool are_same_vectors(vector<string> a, vector<string> b){
    if(a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); i++){
        if(a[i] != b[i]) return false;
    }
    return true;
}

int main(){
    assert(are_same_vectors(all_prefixes("WWW"), {"W", "WW", "WWW"}));
    return 0;
}