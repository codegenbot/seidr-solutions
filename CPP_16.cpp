#include<stdio.h>
#include<vector>
#include<string>
#include<algorithm>
#include<unordered_set>
using namespace std;

int count_distinct_characters(string str){ 
    unordered_set<char> distinctChars;
    for(char c : str) {
        distinctChars.insert(tolower(c));
    }
    return distinctChars.size();
}