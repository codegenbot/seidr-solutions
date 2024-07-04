#include <vector>
#include <cassert>
#include <climits>
#include <iostream>

using namespace std;

vector<int> rolling_max(vector<int> numbers);

bool issame(vector<int> a, vector<int> b) {
    if (a.size() != b.size()) return false;
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

vector<int> rolling_max(vector<int> numbers) {
    vector<int> result;
    int max_so_far = INT_MIN;
    for (int num : numbers) {
        if (num > max_so_far) {
            max_so_far = num;
        }
        result.push_back(max_so_far);
    }
    return result;
}

int main() {
    assert(issame(rolling_max({3, 2, 3, 100, 3}), {3, 3, 3, 100, 100}));
    cout << "Test passed!" << endl;
    return 0;
}