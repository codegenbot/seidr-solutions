#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> maximum(vector<int> arr, int k) {
    vector<int> res;
    for (int i = 0; i < k; i++) {
        auto it = max_element(arr.begin(), arr.end());
        res.push_back(*it);
        arr.erase(it);
    }
    return res;
}

int main() {
    vector<int> arr1 = {-3, -4, 5};
    int k1 = 3;
    cout << "arr: ";
    for (int i : arr1) {
        cout << i << " ";
    }
    cout << endl;
    cout << "k: " << k1 << endl;
    vector<int> res1 = maximum(arr1, k1);
    cout << "Result: ";
    for (int i : res1) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}