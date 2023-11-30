#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool issame(vector<string> a, vector<string> b);

vector<string> reverse_delete(string s, string c){
    vector<string> result;
    string res = "";
    
    for(int i=0; i<s.length(); i++){
        if(c.find(s[i]) == string::npos){
            res += s[i];
        }
    }
    
    string rev_res = res;
    reverse(rev_res.begin(), rev_res.end());
    
    result.push_back(res);
    result.push_back(res == rev_res ? "True" : "False");
    
    return result;
}

bool issame(vector<string> a, vector<string> b){
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
    assert(issame(reverse_delete("mamma", "mia"), {"", "True"}));
    return 0;
}