#include <vector>
#include <string>

vector<string> all_prefixes(string str);

bool issame(vector<string> a, vector<string> b);

int main(){
    assert(issame(all_prefixes("WWW"), {"W", "WW", "WWW"}));
    // your other test cases here
    return 0;
}

vector<string> all_prefixes(string str){
    vector<string> prefixes;
    string prefix = "";
    for(int i = 0; i < str.length(); i++){
        prefix += str[i];
        prefixes.push_back(prefix);
    }
    return prefixes;
}

bool issame(vector<string> a, vector<string> b){
    // your implementation here
}