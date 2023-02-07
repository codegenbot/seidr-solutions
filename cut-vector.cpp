#include <vector>
#include <iostream>
#include <string>
#include <cstring>
#include <queue>
#include <stdio.h>
#include <math.h>
#include <map>
#include <set>
#include <stack>
#include <climits>
using namespace std;
/*
Given a vector of positive integers, ﬁnd the spot where, if you cut the vector, the numbers on both sides are either equal, or the diﬀerence is as small as possible. Return the two resulting subvectors as two outputs. For example, input: 1 0 output: 100 input: 1 10 output: 1100 input: 1 100 output: 11000 input: 1 1000 output: 110000 input: 1 10000 output: 1100000
*/
int main() {
    int n;
    cin >> n;
    vector<int> res;
    while (n > 0) {
        res.push_back(n % 2);
        n /= 2;
    }
    for (int i = res.size() - 1; i >= 0; i--) {
        cout << res[i] << endl;
    }
    return 0;
}
