#include <vector>
#include <iostream>
#include <cassert>

using namespace std;

vector<int> intersperse(vector<int> numbers, int delimiter) {
    vector<int> result;
    if (numbers.empty()) return result;
    for (size_t i = 0; i < numbers.size(); ++i) {
        result.push_back(numbers[i]);
        if (i < numbers.size() - 1) {
            result.push_back(delimiter);
        }
    }
    return result;
}

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

int main() {
    assert(issame(intersperse({2, 3, 4}, 0), {2, 0, 3, 0, 4}));
    assert(issame(intersperse({1, 2, 3, 4, 5}, -1), {1, -1, 2, -1, 3, -1, 4, -1, 5}));
    assert(issame(intersperse({}, 100), {}));
    cout << "All test cases passed!" << endl;
    return 0;
}