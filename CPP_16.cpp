#include<stdio.h>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

int count_distinct_characters(string str) { 
    string temp;
    for (char c : str) {
        if (isupper(c))
            temp += tolower(c);
        else
            temp += c;
    }
    return temp.size();
}