#include <vector>
#include <iostream>

using namespace std;

vector<int> leaders(vector<int>& arr) {
    int n = arr.size();
    vector<int> result;
    
    int rightmostLeader = arr[n - 1];
    
    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] >= rightmostLeader) {
            result.push_back(arr[i]);
            rightmostLeader = arr[i];
        }
    }
    
    reverse(result.begin(), result.end());
    
    return result;
}

int main() {
    vector<int> arr = {1, 3, 4, 1, 5};
    vector<int> leadersResult = leaders(arr);
    for (int leader : leadersResult) {
        cout << leader << " ";
    }
    return 0;
}