#include <vector>
#include <string>
#include <cassert>

using namespace std;

vector<string> all_prefixes(string str){
    vector<string> result;
    string prefix = "";
    for(int i = 0; i < str.length(); i++){
        prefix += str[i];
        result.push_back(prefix);
    }
    return result;
}

int main(){
    assert(all_prefixes("WWW") == vector<string>{"W", "WW", "WWW"});
    return 0;
}