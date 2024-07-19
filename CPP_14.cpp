#include <iostream>
#include <vector>
#include <string>
#include <cassert>

using namespace std;

vector<string> all_prefixes(string str){
    vector<string> result;
    for (int i = 1; i <= str.size(); ++i) {
        result.push_back(str.substr(0, i));
    }
    return result;
}

bool are_same(const vector<string>& a, const vector<string>& b){
    return a == b;
}

int main(){
    assert(are_same(all_prefixes("WWW"), {"W", "WW", "WWW"}));

    return 0;
}