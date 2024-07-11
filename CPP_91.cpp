#include <bits/stdc++.h>
using namespace std;

int is_bored(string S) {
    int count = 0;
    size_t pos = 0;
    while ((pos = S.find("I", pos)) != string::npos) {
        if (S[pos] == '.' || S[pos] == '?' || S[pos] == '!') {
            count++;
        }
        pos += 1;
    }
    return count;
}

int main() {
    assert(is_bored("You and I are going for a walk") == 0);
    return 0;
}