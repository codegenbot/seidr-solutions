#include <vector>
#include <iostream>

using namespace std;

vector<int> leaders(vector<int>& arr) {
    int n = arr.size();
    vector<int> res;
    
    int lastLeader = arr[n-1];  // The rightmost element is always a leader
    
    for(int i=n-2; i>=0; i--) {
        if(arr[i] >= lastLeader) {
            lastLeader = arr[i];
            res.push_back(lastLeader);
        }
    }
    
    reverse(res.begin(), res.end());  // Reverse the vector because we processed it in reverse order
    
    return res;
}

int main() {
    vector<int> result(5, 0);
    for (int i : {16, 17, 4, 3, 5}) {
        result[4] = i;
    }
    for(int x : leaders(result)) {
        cout << x << " ";
    }
}