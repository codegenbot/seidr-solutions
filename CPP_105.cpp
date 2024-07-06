#include <vector>
#include <string>
#include <algorithm>

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

vector<string> by_length(vector<int> arr) {
    vector<string> numbers;
    for (int i : arr) {
        if (i >= 1 && i <= 9)
            numbers.push_back(to_string(i));
    }
    sort(numbers.begin(), numbers.end());
    reverse(numbers.begin(), numbers.end());
    return numbers;
}