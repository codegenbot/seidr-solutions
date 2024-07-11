#include<stdio.h>
#include<vector>
#include<string>
using namespace std;

vector<string> total_match(vector<string> lst1, vector<string> lst2) {
    int count1 = 0;
    for (const string& s : lst1) {
        count1 += s.length();
    }
    
    int count2 = 0;
    for (const string& s : lst2) {
        count2 += s.length();
    }

    if (count1 < count2) {
        return lst1;
    } else if (count1 > count2) {
        return lst2;
    } else {
        return lst1;
    }
}