#include <vector>
#include <cassert>

vector<int> intersperse(vector<int> numbers, int delimiter);

bool issame(vector<int> a, vector<int> b) {
    // function implementation
}

int main() {
    assert(issame(intersperse({2, 2, 2}, 2),{2, 2, 2, 2, 2}));
    // more test cases
    return 0;
}

vector<int> intersperse(vector<int> numbers, int delimiter) {
    vector<int> result;
    if (numbers.empty()) {
        return result;
    }
    result.push_back(numbers[0]);
    for (int i = 1; i < numbers.size(); i++) {
        result.push_back(delimiter);
        result.push_back(numbers[i]);
    }
    return result;
}