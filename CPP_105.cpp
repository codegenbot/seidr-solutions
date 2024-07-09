#include <iostream>
#include <vector>

using namespace std;

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

vector<string> by_length(vector<int> arr) {
    vector<string> names = {"One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};

    vector<int> filtered;
    for (int num : arr) {
        if (num >= 1 && num <= 9) {
            filtered.push_back(num);
        }
    }

    sort(filtered.begin(), filtered.end());

    reverse(filtered.begin(), filtered.end());

    vector<string> result;
    for (int num : filtered) {
        result.push_back(names[num - 1]);
    }

    return result;
}