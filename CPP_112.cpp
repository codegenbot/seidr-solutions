#include <string>
#include <vector>

bool issame(vector<string> a, vector<string> b){
    if(a.size() != b.size()){
        return false;
    }
    for(int i=0; i<a.size(); i++){
        if(a[i] != b[i]){
            return false;
        }
    }
    return true;
}

vector<string> reverse_delete(string s, string c);

vector<string> reverse_delete(string s, string c){
    string result = "";
    for(int i=0; i<s.length(); i++){
        if(c.find(s[i]) == string::npos){
            result += s[i];
        }
    }
    string rev_result = result;
    reverse(rev_result.begin(), rev_result.end());
    bool is_palindrome = (result == rev_result);
    vector<string> output = {result, (is_palindrome ? "True" : "False")};
    return output;
}

int main(){
    assert(issame(reverse_delete("mamma", "mia"), {"", "True"}));
    return 0;
}