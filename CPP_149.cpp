```c
#include <vector>
#include <string>
#include <algorithm>
#include <initializer_list>
#include <iostream>
using namespace std;

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

vector<string> sorted_list_sum(vector<string> lst) {
    vector<string> evenLengthStrings;
    for (const string& str : lst) {
        if (str.length() % 2 == 0) {
            evenLengthStrings.push_back(str);
        }
    }

    sort(evenLengthStrings.begin(), evenLengthStrings.end(),
         [](const string& a, const string& b) {
             if (a.length() != b.length()) {
                 return a.length() < b.length();
             } else {
                 return a < b;
             }
         });

    return evenLengthStrings;
}

int main() {
    vector<string> input = {"aaaa", "bbbb", "dd", "cc"};
    vector<string> expected = {"cc", "dd", "aaaa", "bbbb"};

    if (sorted_list_sum(input) == expected) {
        cout << "The lists are the same." << endl;
    } else {
        cout << "The lists are not the same." << endl;
    }
}