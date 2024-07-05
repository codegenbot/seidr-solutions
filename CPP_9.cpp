#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

vector<int> rolling_max(const vector<int>& numbers) {
    vector<int> result;
    if (numbers.empty()) return result;
    int max_so_far = numbers[0];
    result.push_back(max_so_far);
    for (size_t i = 1; i < numbers.size(); ++i) {
        if (numbers[i] > max_so_far) {
            max_so_far = numbers[i];
        }
        result.push_back(max_so_far);
    }
    return result;
}

bool issame(const vector<int>& a, const vector<int>& b) {
    return a == b;
}

int main() {
    assert(issame(rolling_max({3, 2, 3, 100, 3}), {3, 3, 3, 100, 100}));
    cout << "Test passed." << endl;
    return 0;
}