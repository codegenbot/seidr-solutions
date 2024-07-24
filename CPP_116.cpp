#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> sort_vector(vector<int> arr) {
    // Sort the array based on number of ones in binary representation and decimal value.
    sort(arr.begin(), arr.end(), [](int a, int b) {
        int oneCountA = __builtin_popcount(a);
        int oneCountB = __builtin_popcount(b);

        if (oneCountA == oneCountB)
            return a < b; // Sort based on decimal value if number of ones is the same.
        else
            return oneCountA < oneCountB;
    });

    return arr;
}

int main() {
    vector<int> testCases = {1, 5, 2, 3, 4};
    vector<int> result = sort_vector(testCases);

    for (auto num : result)
        cout << num << " ";

    cout << endl;

    return 0;
}