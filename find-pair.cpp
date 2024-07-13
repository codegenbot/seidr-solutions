#include <vector>
using namespace std;

pair<int,int> findPair(vector<int>& arr, int target) {
    unordered_map<int,int> mp;
    for(int i = 0; i<arr.size();i++){
        int x = arr[i];
        if(mp.find(target-x)!=mp.end()){
            return pair<int,int>(target-x,x);
        }
        mp[x]=i;
    }
    return pair<int,int>(-1,-1); 
}