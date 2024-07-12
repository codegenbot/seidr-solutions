#include <string>

bool issame(vector<string> a, vector<string> b){
    if(a.size() != b.size())
        return false;
    for(int i = 0; i < a.size(); i++){
        if(a[i] != b[i])
            return false;
    }
    return true;
}

vector<string> all_prefixes(string str){
    vector<string> result;
    string prefix = "";
    for(int i = 0; i < str.size(); i++){
        prefix += str[i];
        result.push_back(prefix);
    }
    return result;
}

int main(){
    // Sample code for using the functions
    vector<string> prefixes = all_prefixes("hello");
    vector<string> expected = {"h", "he", "hel", "hell", "hello"};
    bool areSame = issame(prefixes, expected);
    return 0;
}