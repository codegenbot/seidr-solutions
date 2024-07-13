#include <iostream>
#include <vector>

using namespace std;

vector<int> leaders(vector<int>& arr) {
    int n = arr.size();
    vector<int> leaders;
    int max_right = arr[n - 1];
    for (int i = n - 1; i >= 0; i--) {
        if (arr[i] >= max_right) {
            leaders.push_back(arr[i]);
            max_right = arr[i];
        }
    }
    reverse(leaders.begin(), leaders.end());
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
    vector<int> leaders_result = leaders(arr);
    cout << "Leaders: ";
    for (int i = 0; i < leaders_result.size(); i++) {
        cout << leaders_result[i] << " ";
    }
    cout << endl;
    return 0;
}