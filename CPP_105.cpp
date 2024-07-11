#include <vector>
#include <string>
#include <map>
#include <algorithm>
#include <iostream>
#include <cassert>

using namespace std;

vector<string> by_length(vector<string> arr) {
    vector<string> filtered;
    for (string num : arr) {
        if (stoi(num) >= 1 && stoi(num) <= 9) {
            filtered.push_back(num);
        }
    }
    sort(filtered.begin(), filtered.end());
    reverse(filtered.begin(), filtered.end());

    map<int, string> numToName = {
        {1, "One"}, {2, "Two"}, {3, "Three"}, {4, "Four"},
        {5, "Five"}, {6, "Six"}, {7, "Seven"}, {8, "Eight"}, {9, "Nine"}
    };

    vector<string> result;
    for (string num : filtered) {
        result.push_back(numToName[stoi(num)]);
    }

    return result;
}

int main() {
    assert(issame(by_length({"9", "4", "8"}), {"Nine", "Eight", "Four"}));
    return 0;
}