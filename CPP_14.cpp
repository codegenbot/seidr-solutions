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

int main(){
    assert(issame(all_prefixes("WWW"), vector<string>{"W", "WW", "WWW"}));
    return 0;
}