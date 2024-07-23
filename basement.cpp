#include <vector>
#include <iostream>

using namespace std;

int basement(vector<int>& arr) {
    int sum = 0;
    for (int i = 0; i < arr.size(); i++) {
        sum = 0;  // reset the sum
        for (int j = 0; j <= i; j++)
            sum += arr[j];
        if (sum < 0)
            return i;
    }
    return -1;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << basement(arr) << endl;
    return 0;
}