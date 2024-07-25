#include <initializer_list>
#include <vector>
#include <iostream>

bool issame(vector<int> a, vector<int> b);

vector<int> rolling_max(vector<int> numbers) {
    vector<int> result;
    int max = numbers[0];

    for (int num : numbers) {
        if (num > max) {
            max = num;
        }
        result.push_back(max);
    }

    return result;
}

bool issame(vector<int> a, vector<int> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); ++i)
        if (a[i] != b[i]) return false;
    return true;

}

vector<int> nums = {3, 2, 3, 100, 3};
vector<int> expected = {3, 3, 3, 100, 100};

assert(issame(rolling_max(nums), expected));
if (issame(rolling_max(nums), expected)) {
    std::cout << "Test passed";
} else {
    std::cout << "Test failed";
}