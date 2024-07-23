#include <vector>
#include <iostream>

using namespace std;

int basement(vector<int>& arr) {
    for (int i = 0; i < arr.size(); i++) {
        int sum = 0;
        for (int j = 0; j <= i; j++) {
            sum += arr[j];
            if (sum < 0)
                return j;
        }
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