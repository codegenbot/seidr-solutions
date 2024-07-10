```cpp
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {17, 11, 13, 2, 3, 7, 19};
    vector<int> leaders = leaders(arr);
    for(int i:leaders) cout<<i<<" ";
    return 0;
}

vector<int> leaders(vector<int>& arr) {
    int n = arr.size();
    vector<int> res;

    for(int right=n-1; right>=0; right--){
        bool isLeader = true;
        for(int left=right; left<n; left++){
            if(arr[left] >= arr[right]){
                isLeader = false;
                break;
            }
        }
        if(isLeader)
            res.push_back(arr[right]);
    }

    return res;
}