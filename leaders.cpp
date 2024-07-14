#include <vector>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    int n = arr.size();
    vector<int> leaders;
    
    for(int i=n-1; i>=0; i--) {
        bool isLeader = true;
        for(int j=i+1; j<n; j++) {
            if(arr[j] >= arr[i]) {
                isLeader = false;
                break;
            }
        }
        if(isLeader) leaders.push_back(arr[i]);
    }
    
    return leaders;
}

int main() {
    vector<int> arr = {16, 17, 4, 3, 5, 2, 3};
    vector<int> leadersResult = leaders(arr);
    for(int i: leadersResult) cout << i << endl;
    return 0;
}