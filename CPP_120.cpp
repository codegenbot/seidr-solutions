#include<vector>
using namespace std;

vector<int> maximum(vector<int> arr, int k);

vector<int> maximum(vector<int> arr, int k) {
    sort(arr.begin(), arr.end(), greater<int>());
    vector<int> result(arr.begin(), arr.begin() + k);
    return result;
}

int main() {
    // test the maximum function
    vector<int> arr = {5, 8, 2, 10, 3};
    int k = 3;
    
    vector<int> result = maximum(arr, k);
    
    // print the result
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    
    return 0;
}