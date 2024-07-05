#include <iostream>
#include <vector>

using namespace std;

int add_elements(vector<int> arr, int k) {
    int sum = 0;
    for (int i = 0; i < k; ++i) {
        if (arr[i] >= -99 && arr[i] <= 99) {
            sum += arr[i];
        }
    }
    return sum;
}

int main() {
    vector<int> arr;
    int n, k, element;
    cin >> n >> k;
    for (int i = 0; i < n; ++i) {
        cin >> element;
        arr.push_back(element);
    }
    cout << add_elements(arr, k) << endl;
    return 0;
}