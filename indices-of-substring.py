import os
import sys
import numpy as np
import math
import datetime
import collections
import itertools
import queue
import re
"""
ZOJ Weekly 56

Problem B : Acrobat

Time Limit: 2 Seconds      Memory Limit: 65536 KB

Xiaotian is really crazy about Chinese acrobatic that is very good at imitating. In order not to stimulate people to imitate blindly, we only reveal the following abstract information.

There is someone doing somersaults. When this person on the ground, his face is looking to the floor. When he is in the air, his face is looking to the ceiling and smiling. Now his face is looking to the North. After doing somersaults, his face is still toward the North. Please look at the following picture to avoid misunderstanding.

The acrobat originally have N somersault moves, which can be expressed as an sequence of "forward" and "backward". With each step, each step of the forward somersaults maximum 90 degrees, each step of the backward may be any degree (0 degree is also possible). But for security, he does not want any step exceeds 90 degree. Some sequences can never allow him looking to North. Furthermore, the most complicated K sequences must basically meet the needs of the security, within the meaning of eyes looking at the North.

Our task is:

Assume that initial sequence is X, print all the possible after K times, that need to meet the condition, looking at the North.

Input

The first line contains two integers N & K, meaning that the body of the gymnast has N somersault move, K is the number of sequences must looks North. N <= 100, K <= 104

The second line has a string of length N (that has no meaning, just used for coding), "F" means forward, "B" means back. (Please note that appeared in the second row is out.)


Output

If the number of possible sequence >= K, output all the possible sequences of the first K characters, separated by commas.
If there are not enough possible sequences to output K characters, output the possible sequences in format described above.
Sample Input

5 2
FBFFF
Sample Output

\
=== C++ ==
#include<bits/stdc++.h>
#define SZ(r) (int)(r).size()
#define L first.first
#define R first.second
#define X second.first
#define Y second.second
#define INF 0x3f3f3f3f
#define LINF 0x3f3f3f3f3f3f3f3fLL
#define PB push_back
const double eps = 1e-9;
using namespace std;
typedef long long LL;
typedef pair<int, int> PII;
typedef pair<PII, PII> PIII;

const int MAXN = 1005;
bool fb[2];
int a[MAXN];

struct Solution {
    string s;
    bool on_s[MAXN];
    Solution(string s_) {
        s = s_;
        memset(on_s, 0, sizeof(on_s));
        for(int i = 0; i < SZ(s); i++) {
            on_s[i + 2] = s[i] == 'F';
        }
    }

    bool on(int t) {
        return on_s[1 + t % 2] && on_s[2 + t % 2] && on_s[3 + t % 2];
    }
} ans[MAXN * MAXN];

void init() {
    a[0] = 0;
    for(int i = 1; i <= 8; i++) {
        on_s[t % 2] = a[i] >= 1;
        on_s[t % 2] = a[i] >= 2;
        on_s[t % 2] = a[i] >= 3;
        fb = f % 4 == 0;
        t++, f += a[i], som += a[i]*fb;
    }
}

"""
if __name__ == '__main__':
    text = input()
    target = input()
    for i in range(len(text)):
        if text[i:i+len(target)] == target:
            print(i,end=" ")
