```cpp
#include <vector>
#include <string>
using namespace std;

bool issame(vector<string> a,vector<string> b){
    if(a.size()!=b.size())return false;
    for(int i=0;i<a.size();i++){
        if(a[i]!=b[i])return false;
    }
    return true;
}

pair<string,bool> reverse_delete(string s1, string s2) {
    int i=0,j=s2.size()-1;
    while(i<=j){
        if(s1[i]!=s2[j])return make_pair("",false);
        i++;j--;
    }
    return make_pair("",true);
}

int main() {
    pair<pair<string,bool>,bool> result = make_pair(reverse_delete("mamma", "mia"), false);
    if (result.second) {
        cout << "True" << endl;
    } else {
        string s = to_string(result.first.first);
        bool b = !result.first.second;
        if(b)s="False";
        cout << s << endl;
    }
    return 0;
}