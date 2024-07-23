#include <vector>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    int n = arr.size();
    vector<int> leaders;
    
    if(n==0)
        return leaders;
    
    for(int i=n-1; i>=0; i--) {
        bool isLeader = true;
        for(int j=i+1; j<n; j++) {
            if(arr[j] >= arr[i]) {
                isLeader = false;
                break;
            }
        }
        if(isLeader) 
            leaders.push_back(arr[i]);
    }
    
    return leaders;
}

int main() {
    vector<int> arr = {17, 28, 4};
    vector<int> result = leaders(arr);
    for(int i: result)
        cout << i << " ";
    return 0;
}