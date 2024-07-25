#include <vector>
#include <algorithm>
#include <functional>
#include <cassert>

using namespace std;

vector<int> maximum(const vector<int>& arr, int k) {
    sort(arr.begin(), arr.end(), greater<int>());
    return vector<int>(arr.begin(), arr.begin() + k);
}

int main() {
    assert(issame(maximum(vector<int>{1, 2, 3, -23, 243, -400, 0}, 0), {}));
    return 0;
}