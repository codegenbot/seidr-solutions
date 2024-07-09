```
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
    vector<string> result = sorted_list_sum(input);
    if (result == vector<string>{"cc", "dd", "aaaa", "bbbb"}) {
        cout << "The lists are the same." << endl;
    } else {
        cout << "The lists are not the same: actual - " << std::endl;
        for (const string& str : result) {
            cout << str << " ";
        }
        cout << ", expected - ";
        for (const string& str : {"cc", "dd", "aaaa", "bbbb"}) {
            cout << str << " ";
        }
        cout << endl;
    }
}