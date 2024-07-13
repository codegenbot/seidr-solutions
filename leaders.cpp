#include <iostream>
#include <vector>

using namespace std;

vector<int> leaders(vector<int>& arr) {
    int n = arr.size();
    vector<int> leaders;
    for (int i = n - 1; i >= 0; i--) {
        bool leader = true;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] >= arr[i]) {
                leader = false;
                break;
            }
        }
        if (leader) leaders.push_back(arr[i]);
    }
    return leaders;
}

int main() {
    vector<int> arr;
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        cout << "Enter element " << i + 1 << ": ";
        cin >> x;
        arr.push_back(x);
    }
    vector<int> leadersResult = leaders(arr);
    cout << "Leaders: ";
    for (int i = 0; i < leadersResult.size(); i++) {
        cout << leadersResult[i] << " ";
    }
    return 0;
}