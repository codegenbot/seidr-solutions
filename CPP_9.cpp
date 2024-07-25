#include <initializer_list>
#include <vector>
#include <iostream>

bool issame(vector<int> a, vector<int> b);
vector<int> rolling_max(vector<int> numbers);

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

bool testRollingMax() {
    int n;
    cout << "Enter the number of elements in the vector: ";
    cin >> n;

    vector<int> numbers(n);

    for (int i = 0; i < n; ++i) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> numbers[i];
    }

    vector<int> result = rolling_max(numbers);
    vector<int> expected;
    
    int currMax = INT_MIN;

    for (int num : numbers) {
        if (num > currMax)
            currMax = num;
        expected.push_back(currMax);
    }

    if (issame(result, expected)) 
        return true;
    else
        return false;
}