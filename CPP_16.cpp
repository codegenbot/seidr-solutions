#include<stdio.h>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

int count_distinct_characters(string str) { 
    vector<char> characters;
    for (char c : str) {
        characters.push_back(tolower(c));
    }
    sort(characters.begin(), characters.end());
    int distinct_count = 0;
    for (int i = 0; i < characters.size(); i++) {
        if (i == 0 || characters[i] != characters[i-1]) {
            distinct_count++;
        }
    }
    return distinct_count;
}