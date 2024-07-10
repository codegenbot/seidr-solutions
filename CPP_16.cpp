#include<stdio.h>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

int count_distinct_characters(string str) { 
    vector<char> charSet;
    for (char c : str) {
        if (tolower(c) != tolower(charSet[0])) {
            charSet.push_back(c);
        }
    }
    return charSet.size();
}