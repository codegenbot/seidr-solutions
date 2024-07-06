#include<vector>
#include<set>
#include<algorithm>
using namespace std;

vector<int> common(vector<int> l1,vector<int> l2){
    vector<int> result;
    set<int> s11(l1.begin(),l1.end());
    set<int> s22(l2.begin(),l2.end());

    for(auto i : s11)
        if(s22.find(i) != s22.end())
            result.push_back(i);

    sort(result.begin(),result.end());
    return result;
}