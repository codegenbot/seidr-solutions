/*
Given a string, find out how many distinct characters (regardless of case) does it consist of
>>> count_distinct_characters("xyzXYZ")
3
>>> count_distinct_characters("Jerry")
4
*/
#include<stdio.h>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
int count_distinct_characters(string str){ 
    int n = 0;
    vector<char> v(str.begin(), str.end());
    sort(v.begin(), v.end());
    for (int i = 0; i < v.size(); i++){
        if (v[i] != v[i+1]) n++;
    }
    return n;
}
