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
    assert(issame({reverse_delete("mamma", "mia").first}, std::make_tuple("", reverse_delete("mamma", "mia").second ? "True" : "False")));
    return 0;
}