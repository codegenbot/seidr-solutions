#include<vector>
vector<int> maximum(vector<int> arr, int k);

vector<int> maximum(vector<int> arr, int k) {
    sort(arr.begin(), arr.end(), greater<int>());
    vector<int> result(arr.begin(), arr.begin() + k);
    return result;
}

int main() {
    // your code goes here
    return 0;
}