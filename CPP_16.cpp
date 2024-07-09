#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int count_distinct_characters(string str) {
    vector<char> charSet;
    for (char c : str) {
        bool found = false;
        for (char ch : charSet) {
            if (c == toupper(ch) || c == tolower(ch)) {
                found = true;
                break;
            }
        }
        if (!found)
            charSet.push_back(c);
    }
    return charSet.size();
}

int main() {
    cout << count_distinct_characters("xyzXYZ") << endl; // prints 3
    cout << count_distinct_characters("Jerry") << endl; // prints 4
    return 0;
}