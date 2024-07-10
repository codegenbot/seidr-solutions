#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

int main() {
    assert(issame(all_prefixes("WWW"), {"W", "WW", "WWW"}));
    
    vector<string> result = all_prefixes("test");
    
    for (const string &str : result) {
        cout << str << endl;
    }
    
    return 0;
}