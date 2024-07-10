#include<stdio.h>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

int count_distinct_characters(string str) {
    string temp = "";
    for (char c : str) {
        if (tolower(c) > 96 && tolower(c) < 123 || tolower(c) > 64 && tolower(c) < 91)
            temp += tolower(c);
    }
    vector<char> v(temp.begin(), temp.end());
    sort(v.begin(), v.end());
    int count = 0;
    for (int i = 0; i < v.size(); i++) {
        if (i == 0 || v[i] != v[i - 1])
            count++;
    }
    return count;
}