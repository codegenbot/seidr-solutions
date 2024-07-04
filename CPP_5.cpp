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

bool vectors_are_equal(vector<int> a, vector<int> b) {
    return a == b;
}

int main() {
    assert(vectors_are_equal(intersperse({2, 3, 4}, 0), {2, 0, 3, 0, 4}));
    cout << "All test cases passed!" << endl;
    return 0;
}