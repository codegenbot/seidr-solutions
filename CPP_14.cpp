#include <vector>
#include <string>
#include <cassert>

using namespace std;

vector<string> all_prefixes(string str){
    vector<string> result;
    string prefix = "";
    for(char c : str){
        prefix += c;
        result.push_back(prefix);
    }
    return result;
}

int main(){
    vector<string> expected = {"W", "WW", "WWW"};
    assert(all_prefixes("WWW") == expected);
    return 0;
}