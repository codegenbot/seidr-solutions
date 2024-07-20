#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> common(vector<int> l1,vector<int> l2){
    set<int> s1(l1.begin(),l1.end());
    set<int> s2(l2.begin(),l2.end());
    
    set<int> result;
    
    for(auto it = s1.begin(); it != s1.end(); ++it)
        if(s2.find(*it) != s2.end())
            result.insert(*it);
            
    vector<int> ans(result.begin(),result.end());
    return ans;
}