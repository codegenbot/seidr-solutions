#include <iostream>
#include <vector>

using namespace std;

vector<int> leaders(vector<int>& arr) {
    vector<int> leaders;
    int n = arr.size();
    
    if(n == 1) return {arr[0]};
    
    for(int i=n-2; i>=0; i--) {
        while(i<n-1 && arr[i] <= arr[n-1]) {
            n--;
        }
        leaders.push_back(arr[n-1]);
    }
    
    leaders.push_back(arr.back());
    return leaders;
}

int main() {
    vector<int> arr = {16, 17, 4, 3, 5, 2};
    vector<int> result = leaders(arr);
    for (int i : result) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}