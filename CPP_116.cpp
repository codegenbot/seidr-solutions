#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

vector<int> sort_array(vector<int> arr) {
    auto count_ones = [](int x) {
        int count = 0;
        while (x) {
            count += x & 1;
            x >>= 1;
        }
        return count;
    };

    sort(arr.begin(), arr.end(), [&](int a, int b) {
        int ones_a = count_ones(a);
        int ones_b = count_ones(b);
        if (ones_a == ones_b) return a < b;
        return ones_a < ones_b;
    });

    return arr;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    vector<int> sorted_array = sort_array(arr);
    for (int num : sorted_array) {
        cout << num << " ";
    }
    return 0;
}