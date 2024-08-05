#include <vector>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    int n = arr.size();
    vector<int> leaders;
    
    for(int i=0; i<n-1; i++){
        bool isLeader = true;
        for(int j=i+1; j<n; j++){
            if(arr[j] >= arr[i]){
                isLeader = false;
                break;
            }
        }
        if(isLeader) {
            leaders.push_back(arr[i]);
        }
    }
    
    leaders.push_back(arr[n-1]); // The rightmost element is always a leader.
    
    return leaders;
}

int main() {
    vector<int> arr = {16, 17, 4, 3, 5, 2};
    vector<int> leadersRes = leaders(arr);
    for(int i=0; i<leadersRes.size(); i++) {
        cout << leadersRes[i] << " ";
    }
    return 0;
}