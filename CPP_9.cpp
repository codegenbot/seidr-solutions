#include <iostream>
#include <vector>
#include <cassert>
using namespace std;

vector<int> rolling_max(const vector<int>& numbers) {
    vector<int> result;
    int current_max = numbers[0];
    for (int num : numbers) {
        if (num > current_max) {
            current_max = num;
        }
        result.push_back(current_max);
    }
    return result;
}

bool issame(const vector<int>& a, const vector<int>& b) {
    return a == b;
}

int main() {
    vector<int> numbers;
    int n, value;
    cout << "Enter the number of elements: ";
    cin >> n;
    cout << "Enter the elements: ";
    for (int i = 0; i < n; ++i) {
        cin >> value;
        numbers.push_back(value);
    }
    
    vector<int> result = rolling_max(numbers);
    for (int i : result) {
        cout << i << " ";
    }
    cout << endl;

    // Test case
    assert(issame(rolling_max({3, 2, 3, 100, 3}), {3, 3, 3, 100, 100}));

    cout << "All tests passed!" << endl;
    return 0;
}