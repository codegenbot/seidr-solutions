#include<stdio.h>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

int count_distinct_characters(string str) { 
    string s = "";
    for (char c : str) {
        if (tolower(c) != tolower(s.empty() ? '0' : s.back())) {
            s += tolower(c);
        }
    }
    return s.size();
}