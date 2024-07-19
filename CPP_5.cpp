#include <vector>
#include <iostream>
#include <cassert>

using namespace std;

vector<int> intersperse(vector<int> numbers, int delimiter) {
    vector<int> result;
    for (size_t i = 0; i < numbers.size(); ++i) {
        result.push_back(numbers[i]);
        if (i < numbers.size() - 1) {
            result.push_back(delimiter);
        }
    }
    return result;
}

int main() {
    vector<int> nums = {2, 2, 2};
    vector<int> expected = {2, 2, 2, 2, 2};
    assert(intersperse(nums, 2) == expected);
    cout << "Test passed!" << endl;
    return 0;
}