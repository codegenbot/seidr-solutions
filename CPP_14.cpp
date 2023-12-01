#include <vector>
#include <string>

using namespace std;

vector<string> all_prefixes(string str);

bool is_same(vector<string> a, vector<string> b);

vector<string> all_prefixes(string str){
    vector<string> prefixes;
    string prefix = "";
    for(int i=0; i<str.length(); i++){
        prefix += str[i];
        prefixes.push_back(prefix);
    }
    return prefixes;
}

bool is_same(vector<string> a, vector<string> b){
    if (a.size() != b.size())
        return false;
    for(int i=0; i<a.size(); i++){
        if (a[i] != b[i])
            return false;
    }
    return true;
}

int main() {
    assert(is_same(all_prefixes("WWW"), {"W", "WW", "WWW"}));
    return 0;
}