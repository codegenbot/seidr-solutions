#include <algorithm>
#include <vector>

bool issame(vector<int> a,vector<int>b){
    if(a.size() != b.size())
        return false;
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    return a == b;
}

vector<int> unique(vector<int> l){
    vector<int> result(l.begin(), unique_copy(l.begin(), l.end()).end());
    return result;
}