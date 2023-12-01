#include <vector>

vector<int> maximum(vector<int> arr, int k);

int main() {
    vector<int> arr;
    int k;
    // read input from user and populate arr and k
    vector<int> result = maximum(arr, k);
    // print the result
    return 0;
}

vector<int> maximum(vector<int> arr, int k) {
    sort(arr.begin(), arr.end(), greater<int>());
    vector<int> result(arr.begin(), arr.begin() + k);
    return result;
}