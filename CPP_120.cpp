#include<vector>
using namespace std;

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

vector<int> maximum(vector<int> arr, int k) {
    if(k <= 0) return {};
    vector<int> result(arr.begin(), arr.begin() + min(k,arr.size()));
    sort(result.begin(), result.end());
    return result;
}