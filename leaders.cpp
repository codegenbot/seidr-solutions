#include <vector>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    int n = arr.size();
    vector<int> res;
    
    for(int i=n-1; i>=0; i--){
        bool flag = true;
        for(int j=i+1; j<n; j++){
            if(arr[i] < arr[j]) {
                flag = false;
                break;
            }
        }
        if(flag) res.push_back(arr[i]);
    }
    
    return res;
}