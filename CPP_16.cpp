#include<stdio.h>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

int count_distinct_characters(string str) {
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    vector<char> chars;
    for (char c : str) {
        if (!binary_search(chars.begin(), chars.end(), c)) {
            chars.push_back(c);
        }
    }
    return chars.size();
}