#include <initializer_list>
#include <vector>
#include <iostream>

bool issame(vector<int> a, vector<int> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); ++i)
        if (a[i] != b[i]) return false;
    return true;
}

vector<int> rolling_max(vector<int> numbers) {
    vector<int> result;
    int max = INT_MIN;

    for (int num : numbers) {
        if (num > max) {
            max = num;
        }
        result.push_back(max);
    }

    return result;
}

int main() {
    std::vector<int> numbers;
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        numbers.push_back(x);
    }
    vector<int> res = rolling_max(numbers);
    vector<int> expected = numbers;
    sort(expected.begin(), expected.end());
    if (issame(res, expected)) {
        std::cout << "Test passed";
    } else {
        std::cout << "Test failed";
    }
}