```cpp
#include <vector>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    int n = arr.size();
    vector<int> res;
    
    for(int i=n-1; i>=0; i--){
        bool isLeader = true;
        for(int j=i+1; j<n; j++){
            if(arr[j] >= arr[i]){
                isLeader = false;
                break;
            }
        }
        if(isLeader)
            res.push_back(arr[i]);
    }
    
    return res;
}

int main() {
    vector<int> arr = {17, 11, 13, 2, 3, 7, 19};
    vector<int> leaders = leaders(arr);
    for(int i:leaders) cout<<i<<" ";
    return 0;
}