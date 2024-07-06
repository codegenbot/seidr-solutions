#include <vector>
int next_smallest(vector<int> lst) {
    vector<int> v = lst;
    include <algorithm>
    sort(v.begin(), v.end());
    if (v.size() < 2) return -1; 
    for(int i=0;i<v.size();i++){
        for(int j=i+1;j<v.size();j++){
            if(v[i]>v[j]){
                return v[i];
            }
        }
    }
    return -1;
}