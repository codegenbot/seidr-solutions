#include <iostream>
#include <vector>
#include <map>
#include <string>

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

int main() {
    assert(issame(by_length({9, 4, 8}) , {"Nine", "Eight", "Four"}));
    return 0;
}

vector<string> by_length(vector<int> arr) {
    map<int, string> numberNames = {{1, "One"}, {2, "Two"}, {3, "Three"},
                                     {4, "Four"}, {5, "Five"}, {6, "Six"},
                                     {7, "Seven"}, {8, "Eight"}, {9, "Nine"}};
    vector<string> result;
    for (int num : arr) {
        if (num >= 1 && num <= 9)
            result.push_back(numberNames[num]);
    }
    sort(result.begin(), result.end(),
         [](const string& a, const string& b) {
             return a.length() < b.length();
         });
    reverse(result.begin(), result.end());
    return result;
}