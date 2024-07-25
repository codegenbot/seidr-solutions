#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

vector<int> maximum(vector<int> arr, int k);

int main() {
    assert(issame(maximum({1, 2, 3, -23, 243, -400, 0}, 0), {}));

    return 0;
}

vector<int> maximum(vector<int> arr, int k) {
    vector<int> sortedArr = arr;
    sort(sortedArr.begin(), sortedArr.end(), greater<int>());
    return vector<int>(sortedArr.begin(), sortedArr.begin() + min(k, int(sortedArr.size())));
}