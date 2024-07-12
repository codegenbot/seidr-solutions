#include<stdio.h>
#include<vector>
#include<string>
using namespace std;

vector<string> total_match(vector<string> lst1, vector<string> lst2) {
    if(lst1.empty()) return lst2;
    if(lst2.empty()) return lst1;
    
    int sum1 = 0, sum2 = 0;
    for(auto &s : lst1) {
        sum1 += s.length();
    }
    for(auto &s : lst2) {
        sum2 += s.length();
    }

    if(sum1 < sum2) return lst1;
    if(sum2 < sum1) return lst2;

    return lst1;
}