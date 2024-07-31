#include <vector>
#include <string>
#include <cassert>

using namespace std;

vector<string> all_prefixes(string str){
    vector<string> result;
    for (int i = 1; i <= str.length(); ++i) {
        result.push_back(str.substr(0, i));
    }
    return result;
}

bool issame(const vector<string>& a, const vector<string>& b);

bool issame(const vector<string>& a, const vector<string>& b){
    return a == b;
}

int main(){
    assert(issame(all_prefixes("WWW"), vector<string>{"W", "WW", "WWW"}));

    return 0;
}