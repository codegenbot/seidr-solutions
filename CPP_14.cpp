#include <string>
#include <vector>

bool issame(vector<string> a, vector<string> b);

vector<string> all_prefixes(string str);

bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    assert(issame(all_prefixes("hello"), {"h", "he", "hel", "hell", "hello"}));
    return 0;
}

vector<string> all_prefixes(string str){
    vector<string> result;
    string prefix = "";
    for(int i = 0; i < str.length(); i++){
        prefix += str[i];
        result.push_back(prefix);
    }
    return result;
}