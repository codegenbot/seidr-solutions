#include <vector>
#include <algorithm>
#include <functional>
#include <cassert>

using namespace std;

vector<int> maximum(const vector<int>& arr, int k) {
    sort(arr.begin(), arr.end(), greater<int>());
    return vector<int>(arr.begin(), arr.begin() + static_cast<size_t>(k));
}

int main() {
    assert(maximum(vector<int>{1, 2, 3, -23, 243, -400, 0}, 3) == vector<int>{243, 3, 2});
    return 0;
}