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
    vector<string> v1 = {reverse_delete("mamma", "mia").first};
    string s2 = reverse_delete("mamma", "mia").second ? "True" : "False";
    v1.push_back(s2);
    assert (issame(v1, {"", "True"}));
    return 0;
}