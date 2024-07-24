#include<stdio.h>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

int count_distinct_characters(string str) {
    vector<char> unique_chars;
    for (char c : str) {
        if (tolower(c) >= 'a' && tolower(c) <= 'z')
            unique_chars.push_back(tolower(c));
    }
    return unique_chars.size();
}