#include<stdio.h>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

int count_distinct_characters(string str) {
    vector<char> charSet;
    for (char c : str) {
        if (tolower(c) >= 'a' && tolower(c) <= 'z') {
            bool found = false;
            for (char ch : charSet) {
                if (ch == tolower(c)) {
                    found = true;
                    break;
                }
            }
            if (!found) {
                charSet.push_back(tolower(c));
            }
        }
    }
    return charSet.size();
}