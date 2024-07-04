#include <vector>
#include <cassert>
#include <iostream>

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

bool issame(const vector<int>& a, const vector<int>& b) {
    return a == b;
}

int main() {
    assert(issame(intersperse({2, 2, 2}, 2), vector<int>{2, 2, 2, 2, 2}));
    cout << "All test cases passed!" << endl;
    return 0;
}