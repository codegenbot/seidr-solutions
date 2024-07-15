#include <vector>
#include <iostream>

using namespace std;

vector<int> leaders(vector<int>& arr) {
    int n = arr.size();
    vector<int> leaders;
    
    for(int i=n-1; i>=0; i--) {
        bool leader = true;
        for(int j=i+1; j<n; j++) {
            if(arr[i] < arr[j]) {
                leader = false;
                break;
            }
        }
        
        if(leader) {
            leaders.push_back(arr[i]);
        }
    }
    
    return leaders;
}

int main() {
    vector<int> arr = {1, 3, 4, 2};
    vector<int> leadersRes = leaders(arr);
    for(int leader: leadersRes) {
        cout << leader << " ";
    }
    return 0;
}