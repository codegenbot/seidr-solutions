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
Given a vector of positive integers, ﬁnd the spot where, if you cut the vector,
the numbers on both sides are either equal, or the diﬀerence is as small as possible.
Return the two resulting subvectors as two outputs.
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
// #include <vector>
// #include <iostream>
// #include <string>
// #include <cstring>
// #include <queue>
// #include <stdio.h>
// #include <math.h>
// #include <map>
// #include <set>
// #include <stack>
// #include <climits>
// using namespace std;
// /*
// Given a vector of positive integers, ﬁnd the spot where, if you cut the vector,
// the numbers on both sides are either equal, or the diﬀerence is as small as possible.
// Return the two resulting subvectors as two outputs.
// For example,
// input:
// 1
// 0
// output:
// 1
// 0
// 0

// input:
// 1
// 10
// output:
// 1
// 10
// 0

// input:
// 1
// 100
// output:
// 1
// 100
// 0

// input:
// 1
// 1000
// output:
// 1
// 1000
// 0

// input:
// 1
// 10000
// output:
// 1
// 10000
// 0

// */
// int main() {
//     int n;
//     cin >> n;
//     vector<int> v;
//     for (int i = 0; i < n; i++) {
//         int t;
//         cin >> t;
//         v.push_back(t);
//     }
//     int minDiff = INT_MAX;
//     int index = 0;
//     for (int i = 0; i < v.size(); i++) {
//         if (i == 0) {
//             if (minDiff > abs(v[i] - v[i + 1])) {
//                 minDiff = abs(v[i] - v[i + 1]);
//                 index = i;
//             }
//         } else if (i == v.size() - 1) {
//             if (minDiff > abs(v[i] - v[i - 1])) {
//                 minDiff = abs(v[i] - v[i - 1]);
//                 index = i;
//             }
//         } else {
//             if (minDiff > abs(v[i] - v[i + 1])) {
//                 minDiff = abs(v[i] - v[i + 1]);
//                 index = i;
//             }
//             if (minDiff > abs(v[i] - v[i - 1])) {
//                 minDiff = abs(v[i] - v[i - 1]);
//                 index = i;
//             }
//         }
//     }
//     for (int i = 0; i < v.size(); i++) {
//         if (i == index) {
//             cout << 0 << endl;
//         } else {
//             cout << v[i] << endl;
//         }
//     }
//     return 0;
// }

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
Given a vector of positive integers, ﬁnd the spot where, if you cut the vector,
the numbers on both sides are either equal, or the diﬀerence is as small as possible.
Return the two resulting subvectors as two outputs.
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
int main() {
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++) {
        int t;
        cin >> t;
        v.push_back(t);
    }
    int minDiff = INT_MAX;
    int index = 0;
    for (int i = 0; i < v.size(); i++) {
        int left = 0;
        int right = 0;
        for (int j = 0; j < i; j++) {
            left += v[j];
        }
        for (int j = i + 1; j < v.size(); j++) {
            right += v[j];
        }
        if (minDiff > abs(left - right)) {
            minDiff = abs(left - right);
            index = i;
        }
    }
    for (int i = 0; i < v.size(); i++) {
        if (i == index) {
            cout << 0 << endl;
        } else {
            cout << v[i] << endl;
        }
    }
    return 0;
}
