#include <vector>
#include <algorithm>

using namespace std;

bool issame(const vector<int>& a, const vector<int>& b){
    return a.size() == b.size() && equal(a.begin(), a.end(), b.begin());
}

vector<int> maximum(vector<int> arr, int k) {
    sort(arr.begin(), arr.end(), greater<int>());
    vector<int> result(arr.begin(), arr.begin() + k);
    return result;
}

int main() {
    assert(issame(maximum({1, 2, 3, -23, 243, -400, 0}, 0), {}));
    
    return 0;
}