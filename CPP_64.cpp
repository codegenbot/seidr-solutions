#include <bits/stdc++.h>
using namespace std;

int vowels_count(string s) {
    int count = 0;
    for (auto c : s) { 
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            (c == 'y' && s.back() == 'y')) {
            count++;
        }
    }
    return count;
}