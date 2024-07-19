#include <vector>
#include <string>
#include <cassert>

using namespace std;

bool issame(vector<string> a, vector<string> b){
    return a == b;
}

vector<string> all_prefixes(string str){
    vector<string> result;
    string prefix = "";
    for (char c : str) {
        prefix += c;
        result.push_back(prefix);
    }
    return result;
}

int main() {
    assert(issame(all_prefixes("WWW"), vector<string>{"W", "WW", "WWW"}));
    return 0;
}