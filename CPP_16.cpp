#include<stdio.h>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

int count_distinct_characters(string str) {
    vector<char> distinct_chars;
    for (char c : str) {
        if (tolower(c) >= 'a' && tolower(c) <= 'z') {
            auto it = find(distinct_chars.begin(), distinct_chars.end(), tolower(c));
            if (it == distinct_chars.end()) {
                distinct_chars.push_back(tolower(c));
            }
        }
    }
    return distinct_chars.size();
}