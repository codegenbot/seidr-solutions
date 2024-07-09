#include <vector>
#include <algorithm>
#include <string>

bool issame(vector<string>, vector<string>);

vector<string> by_length(vector<int> arr) {
    vector<string> numbers;
    for (int num : arr) {
        if (num >= 1 && num <= 9) {
            numbers.push_back(to_string(num));
        }
    }
    sort(numbers.begin(), numbers.end());
    reverse(numbers.begin(), numbers.end());
    return numbers;
}

bool issame(vector<string>, vector<string>) {
    // implementation
}