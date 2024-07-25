#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

vector<int> maximum(const vector<int>& arr, int k) {
    sort(arr.begin(), arr.end(), less<int>());
    return vector<int>(arr.begin(), arr.begin() + k);
}

int main() {
    assert(maximum(vector<int>{1, 2, 3, -23, 243, -400, 0}, 0) == vector<int>{});
    return 0;
}