#include <bits/stdc++.h>

using namespace std;

int starts_one_ends(int n){
    int count = 0;
    for (long long i = 1; i <= pow(10, n-1) && i <= pow(10, n)-1; ++i) {
        string s = to_string(i);
        if(s[0] == '1' || s.back() == '1') 
            count++;
    }
    return count;
}