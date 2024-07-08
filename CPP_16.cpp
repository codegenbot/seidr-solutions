#include<stdio.h>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

int count_distinct_characters(string str) { 
    vector<char> chars;
    for (char c : str) {
        if (tolower(c) != tolower(chars[0])) {
            chars.push_back(c);
        }
    }
    return chars.size();
}