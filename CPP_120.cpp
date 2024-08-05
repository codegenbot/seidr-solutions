#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

bool issame(const vector<int>& a, const vector<int>& b){
    return a == b;
}

vector<int> maximum(vector<int> arr, int k){
    sort(arr.begin(), arr.end(), greater<int>());
    arr.resize(k);
    return arr;
}