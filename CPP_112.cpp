#include <vector>
#include <string>
#include <algorithm>
#include <cassert>

using namespace std;

bool issame(vector<string> a, vector<string> b){
    return a == b;
}

vector<string> reverse_delete(string s, string c){
    vector<string> result;
    string res = "";

    for(int i = 0; i < s.length(); i++){
        if(c.find(s[i]) == string::npos){
            res += s[i];
        }
    }

    string rev_res = res;
    reverse(rev_res.begin(), rev_res.end());
    
    if(res == rev_res){
        result.push_back(res);
        result.push_back("True");
    }
    else{
        result.push_back(res);
        result.push_back("False");
    }

    return result;
}

int main(){
    assert(issame(reverse_delete("mamma", "mia"), {"", "True"}));

    return 0;
}