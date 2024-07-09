#include<stdio.h>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

int count_distinct_characters(string str) {
    vector<char> charSet;
    for (char c : str) {
        bool found = false;
        for (char ch : charSet) {
            if (tolower(c) == tolower(ch)) {
                found = true;
                break;
            }
        }
        if (!found)
            charSet.push_back(c);
    }
    return charSet.size();
}