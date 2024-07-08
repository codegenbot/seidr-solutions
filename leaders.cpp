```cpp
#include <iostream>
#include <vector>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    vector<int> result;
    int n = arr.size();
    if (n == 0) return result; 
    int rightmostLeader = arr[n - 1];
    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] >= rightmostLeader) {
            rightmostLeader = arr[i];
            result.push_back(rightmostLeader);
        }
    }
    return result;
}

int main() {
    vector<int> arr = {1, 3, 4, 2};
    vector<int> leadersResult = leaders(arr);
    for (int leader : leadersResult) {
        cout << leader << endl;
    }
    return 0;
}