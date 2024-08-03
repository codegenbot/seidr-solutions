#include <vector>
#include <string>
#include <map>
#include <algorithm>
#include <cassert>

using namespace std;

bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

vector<string> by_length(vector<int> arr) {
    vector<string> result;
    map<int, string> num_to_name = {
        {1, "One"},
        {2, "Two"},
        {3, "Three"},
        {4, "Four"},
        {5, "Five"},
        {6, "Six"},
        {7, "Seven"},
        {8, "Eight"},
        {9, "Nine"}
    };

    vector<int> filtered;
    for (int num : arr) {
        if (num >= 1 && num <= 9) {
            filtered.push_back(num);
        }
    }

    sort(filtered.begin(), filtered.end());
    reverse(filtered.begin(), filtered.end());

    for (int num : filtered) {
        result.push_back(num_to_name[num]);
    }

    return result;
}

assert(issame(by_length({9, 4, 8}), {"Nine", "Eight", "Four"}));