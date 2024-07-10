#include <string>

vector<string> by_length(vector<int> arr) {
    vector<int> digits;
    for (int i : arr) {
        if (i >= 1 && i <= 9) {
            digits.push_back(i);
        }
    }

    sort(digits.begin(), digits.end());
    reverse(digits.begin(), digits.end());

    vector<string> result;
    map<int, string> digitNames = {{1, "One"}, {2, "Two"}, {3, "Three"}, {4, "Four"},
                                      {5, "Five"}, {6, "Six"}, {7, "Seven"}, {8, "Eight"}, {9, "Nine"}};

    for (int i : digits) {
        result.push_back(digitNames[i]);
    }

    return result;
}