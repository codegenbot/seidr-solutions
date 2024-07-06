#include <iostream>
#include <vector>
using namespace std;

int findFirstNegativeIndex(vector<int>& arr) {
    int sum = 0;
    for (int i = 0; i < arr.size(); i++) {
        sum += arr[i];
        if (sum < 0) return i;
    }
    return -1;
}

int main() {
    vector<int> arr;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        arr.push_back(x);
    }
    cout << findFirstNegativeIndex(arr) << endl;
    return 0;
}