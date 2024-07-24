#include <vector>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    int n = arr.size();
    vector<int> leaders;
    
    for (int i = 0; i < n; i++) {
        bool isLeader = true;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] >= arr[i]) {
                isLeader = false;
                break;
            }
        }
        if (isLeader) leaders.push_back(arr[i]);
    }
    
    return leaders;
}

vector<int> leaders(vector<int>& arr) {
    int n = arr.size();
    vector<int> leaders;
    leaders.push_back(arr[n-1]);
    for(int i=n-2; i>=0; i--) {
        if(arr[i] >= arr[i+1])
            leaders.push_back(arr[i]);
    }
    
    return leaders;
}

int main() {
    vector<int> arr = {5, 2, 3, 4}; 
    vector<int> leadersResult = leaders(arr);
    for (int leader : leadersResult) {
        cout << leader << endl; 
    }
    return 0;
}