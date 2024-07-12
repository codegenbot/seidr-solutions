```cpp
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool operator==(const vector<int>& v1, const vector<int>& v2) {
    return (v1.size() == v2.size()) && equal(v1.begin(), v1.end(), v2.begin());
}

vector<int> rolling_max(vector<int> numbers) {
    vector<int> maxNumbers;
    int currentMax = INT_MIN;

    for (int num : numbers) {
        if (num > currentMax)
            currentMax = num;
        maxNumbers.push_back(currentMax);
    }

    return maxNumbers;
}

bool issame(vector<int> a, vector<int> b) {
    return a == b; // implement your comparison logic here
}

int main() {
    vector<int> numbers;
    int num;

    cout << "Enter numbers (enter -1 to stop): ";
    while ((cin >> num) && (num != -1)) {
        numbers.push_back(num);
    }

    vector<int> maxNumbers = rolling_max(numbers);

    for (int i = 0; i < maxNumbers.size(); i++) {
        cout << "Maximum up to " << i + 1 << " is " << maxNumbers[i] << endl;
    }
    
    vector<int> v1({3, 2, 3, 100, 3});
    vector<int> v2({3, 3, 3, 100, 100});
    if (v1 == v2)
        cout << "Vectors are equal" << endl;
    else
        cout << "Vectors are not equal" << endl;
    
    assert(issame(rolling_max({3, 2, 3, 100, 3}) ,{3, 3, 3, 100, 100}));
    
    return 0;
}