#include <bits/stdc++.h>
using namespace std;

vector<int> rolling_max(vector<int> numbers);
bool issame(vector<int> a, vector<int> b);

vector<int> rolling_max(vector<int> numbers) {
    vector<int> result;
    int max_so_far = INT_MIN;
    for (int i = 0; i < numbers.size(); i++) {
        max_so_far = max(max_so_far, numbers[i]);
        result.push_back(max_so_far);
    }
    return result;
}

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

int main() {
    assert(issame(rolling_max({3, 2, 3, 100, 3}), {3, 3, 3, 100, 100}));
}