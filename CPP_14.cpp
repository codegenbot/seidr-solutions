#include <vector>
#include <string>

vector<string> all_prefixes(string str){
    vector<string> result;
    string prefix = "";
    for(int i = 0; i < str.length(); i++){
        prefix += str[i];
        result.push_back(prefix);
    }
    return result;
}

bool issame(vector<string> a, vector<string> b) {
    // implementation goes here
}

int main() {
    // test your code here
    assert(issame(all_prefixes("WWW"), {"W", "WW", "WWW"}));
    return 0;
}