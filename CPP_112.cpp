#include <vector>
#include <string>
using namespace std;

bool issame(const vector<string>& a, const vector<string>& b);

pair<string,bool> reverse_delete(string s1, string s2) {
    int i=0,j=s2.size()-1;
    while(i<=j){
        if(s1[i]!=s2[j])return make_pair(s1,"false");
        i++;j--;
    }
    return make_pair("",true);
}

int main() {
    pair<pair<string,bool>,bool> result = make_pair(reverse_delete("mamma", "mia"), false);
    if (result.second) {
        cout << "True" << endl;
    } else {
        string s = result.first.first;
        bool b = result.first.second == "false";
        if(b)s="False";
        cout << s << endl;
    }
    return 0;
}