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
    cout << "The lists are the same: actual - " << result << ", expected - {" << "cc" << ", " << "dd" << ", " << "aaaa" << ", " << "bbbb" << "}" << endl;
}