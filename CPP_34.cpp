#include <vector>
#include <set>

using namespace std;

bool issame(vector<int> v1, vector<int> v2){
    if(v1.size() != v2.size())return false;
    for(int i = 0; i<v1.size();i++){
        if(find(v2.begin(),v2.end(),v1[i]) == v2.end())
            return false;
    }
    return true;
}

vector<int> unique(vector<int> l) {
    set<int> s(l.begin(), l.end());
    vector<int> res(s.begin(), s.end());
    return res;
}