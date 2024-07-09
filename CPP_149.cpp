#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<string> sorted_list_sum(vector<string> lst) {
    vector<string> evenLengthStrings;
    for (const string& str : lst) {
        if (str.length() % 2 == 0) {
            evenLengthStrings.push_back(str);
        }
    }

    sort(evenLengthStrings.begin(), evenLengthStrings.end(),
         [](const string& a, const string& b) {
             return std::tie(a.length(), a) < std::tie(b.length(), b);
         });

    return evenLengthStrings;
}

int main() {
    vector<string> input = {"aaaa", "bbbb", "dd", "cc"};
    vector<string> result = sorted_list_sum(input);
    cout << "The lists are the same: actual - ";
    for(const string& str : result) {
        cout << str << ", ";
    }
    cout << "\nexpected - { cc, dd, aaaa, bbbbb }\n";
}