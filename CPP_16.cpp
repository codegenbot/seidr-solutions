#include<stdio.h>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

int count_distinct_characters(string str) {
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    vector<char> unique_chars;
    for (char c : str) {
        if (find(unique_chars.begin(), unique_chars.end(), c) == unique_chars.end()) {
            unique_chars.push_back(c);
        }
    }
    return static_cast<int>(unique_chars.size());
}