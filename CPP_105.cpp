#include <vector>
#include <map>
#include <string>
#include <algorithm>

// Define issame function here
bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

int main() {
    // Use issame function here
    assert(issame(by_length({9, 4, 8}), {"Nine", "Eight", "Four"}));
    return 0;
}

vector<string> by_length(vector<int> arr) {
    vector<int> numArr;
    for (int i : arr) {
        if (i >= 1 && i <= 9)
            numArr.push_back(i);
    }
    sort(numArr.begin(), numArr.end());
    reverse(numArr.begin(), numArr.end());
    vector<string> result;
    map<int, string> numMap = {{1, "One"}, {2, "Two"}, {3, "Three"},
                                {4, "Four"}, {5, "Five"}, {6, "Six"},
                                {7, "Seven"}, {8, "Eight"}, {9, "Nine"}};
    for (int i : numArr) {
        result.push_back(numMap[i]);
    }
    return result;
}