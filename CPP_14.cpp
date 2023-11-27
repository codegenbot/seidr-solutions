#include <vector>
#include <string>
#include <cassert>

using namespace std;

vector<string> all_prefixes(string str) {
    vector<string> result;
    string prefix = "";
    for(int i = 0; i < str.length(); i++) {
        prefix += str[i];
        result.push_back(prefix);
    }
    return result;
}

bool is_same_vector(vector<string> a, vector<string> b) {
    if(a.size() != b.size())
        return false;
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i])
            return false;
    }
    return true;
}

int main() {
    assert(is_same_vector(all_prefixes("WWW"), {"W", "WW", "WWW"}));
    return 0;
}