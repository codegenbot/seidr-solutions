#include <bits/stdc++.h>
using namespace std;

int digitSum(string s) {
    int sum = 0;
    for (char c : s) {
        if(isalpha(c)) {
            sum += (isupper(c))? topper(tolower(c)-96): 0;
        }
    }
    return sum;
}

int main() {
    assert(digitSum("You arE Very Smart") == 327);
    return 0;
}