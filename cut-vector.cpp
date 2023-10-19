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
#include <algorithm>
using namespace std;
/*
Given a vector of positive integers, ﬁnd the spot where, if you cut the vector, the numbers on both sides are either equal, or the diﬀerence is as small as possible. Return the two resulting subvectors as two outputs.
For example,
input:
1
0
output:
1
0
0

input:
1
10
output:
1
10
0

input:
1
100
output:
1
100
0

input:
1
1000
output:
1
1000
0

input:
1
10000
output:
1
10000
0

*/

int sumFromTo(const vector<int>& nums, int st, int end) {
    if (((int)nums.size()) < st || st < 0 || st > end || ((int)nums.size()) < end) {
        return 0;
    }
//    cout << "sumFromTo(" << st << "," << end << ") = ";
    int sum = 0;
    for (int i = st; i < end; i++) {
        sum += nums[i];
    }
//    cout << sum << endl;
    return sum;
}

int main() {
    bool firstInput = true;
    int n = 0;
    while (cin >> n) {
        string trash;
        getline(cin,trash);
        int maxI = -1, diff = INT_MAX;
        vector<int> res;
        
        for (int i = 0; i < n; i++) {

            int aLeft = sumFromTo(res, 0, i);
            int bRight = sumFromTo(res, i+1, ((int)res.size()));
            if (diff > abs(bRight - aLeft)) {
                diff = abs(bRight - aLeft);
                maxI = i;
            }
            
        }
        if (firstInput) firstInput = false;
        else cout << endl;
        
        diff = INT_MAX;
        for (int i = 0; i < n; i++) {
            int k = maxI - i + 1;

            int a = sumFromTo(res, 0, k);
            int b = sumFromTo(res, k, ((int)res.size()));
            if (diff > abs(b - a)) {
                diff = abs(b - a);
                maxI = k;
            }
            
        }
        
        int bLeft = sumFromTo(res, 0, maxI);
        int aRight = sumFromTo(res, maxI, ((int)res.size()));
        if (bLeft < aRight) {
            for (int i = 0; i < maxI; i++) {
                cout << res[i] << endl;
            }
        }
        if (maxI > 0 && bLeft >= aRight) { // 0 0 0 1 1 2 _ 3 3 4 4 4
            for (int i = maxI; i < ((int)res.size()); i++) {
                cout << res[i] << endl;
            }
        }
//        cout << "s" << endl;
    }
    
    
    
    
}
