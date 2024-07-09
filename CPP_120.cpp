#include <vector>
#include <algorithm>

using namespace std;

bool issame(int a, int b) {
    if (a == b)
        return true;
    else
        return false;
}

vector<int> maximum(vector<int> arr, int k) {
    vector<int> result(arr.begin(), arr.begin() + k);
    sort(result.begin(), result.end());
    return result;
}