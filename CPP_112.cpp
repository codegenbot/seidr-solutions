```cpp
#include <vector>
#include <string>
using namespace std;

bool issame(const vector<string>& a, const vector<string>& b);

pair<vector<string>, bool> reverse_delete(string s1, string s2) {
    int i=0,j=s2.size()-1;
    vector<string> result;
    while(i<=j){
        if(s1[i]!=s2[j])return make_pair(result,{false});
        i++;j--;
        result.push_back(s1.substr(0,i));
    }
    return make_pair({""},true);
}

int main() {
    auto res = reverse_delete("mamma", "mia");
    assert(issame({res.first}, (res.second ? vector<string>({"True"}) : vector<string>({"False"}))));
    return 0;
}