#include <vector>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    vector<int> res;
    int n = arr.size();
    if(n==1){
        res.push_back(arr[0]);
        return res;
    }
    for(int i=n-2;i>=0;i--){
        while(i<n-1 && arr[i]>=arr[n-1]){
            i--;
        }
        if(i==-1)break;
        res.push_back(arr[i]);
    }
    res.push_back(arr[0]);
    reverse(res.begin(),res.end());
    return res;
}