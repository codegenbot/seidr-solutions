```cpp
#include<stdio.h>
#include<string>
#include<algorithm>
using namespace std;

bool same_chars(string s0, string s1) {
    set<char> set0(s0.begin(), s0.end());
    set<char> set1(s1.begin(), s1.end());
    return set0 == set1;
}