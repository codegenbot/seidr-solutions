#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

int count_ones(int n) {
    int count = 0;
    while (n) {
        count += n & 1;
        n >>= 1;
    }
    return count;
}

vector<int> sort_array(vector<int> arr) {
    sort(arr.begin(), arr.end(), [](int a, int b) {
        int ones_a = count_ones(a);
        int ones_b = count_ones(b);
        if (ones_a == ones_b) {
            return a < b;
        }
        return ones_a < ones_b;
    });
    return arr;
}

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

int main() {
    vector<int> arr;
    int n, x;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> x;
        arr.push_back(x);
    }
    vector<int> sorted_arr = sort_array(arr);
    for (auto val : sorted_arr) {
        cout << val << " ";
    }
    cout << endl;
    return 0;
}