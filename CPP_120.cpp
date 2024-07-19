#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> maximum(vector<int> arr, int k) {
    sort(arr.begin(), arr.end(), greater<int>());
    return vector<int>(arr.begin(), arr.begin() + k);
}

int main() {
    vector<int> arr;
    int k;

    // Read the array
    int num;
    while(cin >> num) {
        arr.push_back(num);
    }

    cin >> k;

    vector<int> result = maximum(arr, k);

    // Print the result
    for(int i : result) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}