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
Given a text string and a target string, return a list of integers of the indices at which the target appears in the text. Targets may overlap.
For example,
input:
a
5
output:
0
input:
!
!
output:
10
input:
r
nm,xcnwqnd@#$fwkdjn3
output:
0
input:
hi
hihihihihihihihihihi
output:
0
input:
############
#
output:
120 1 2 3 4 5 6 7 8 9 10 11
input:
############
##
output:
120 1 2 3 4 5 6 7 8 9 10 11
input:
############
###
output:
120 1 2 3 4 5 6 7 8 9 10 11
*/

// 如果text的长度小于target的长度，那么就不用比较了
// 如果text的长度等于target的长度，那么就只需要比较一次
// 如果text的长度大于target的长度，那么就需要比较text.size() - target.size() + 1次
// 如果text的长度小于target的长度，那么就不用比较了
// 如果text的长度等于target的长度，那么就只需要比较一次
// 如果text的长度大于target的长度，那么就需要比较text.size() - target.size() + 1次
// 如果text的长度小于target的长度，那么就不用比较了
// 如果text的长度等于target的长度，那么就只需要比较一次
// 如果text的长度大于target的长度，那么就需要比较text.size() - target.size() + 1次
// 如果text的长度小于target的长度，那么就不用比较了
// 如果text的长度等于target的长度，那么就只需要比较一次
// 如果text的长度大于target的长度，那么就需要比较text.size() - target.size() + 1次
// 如果text的长度小于target的长度，那么就不用比较了
// 如果text的长度等于target的长度，那么就只需要比较一次
// 如果text的长度大于target的长度，那么就需要比较text.size() - target.size() + 1次
// 如果text的长度小于target的长度，那么就不用比较了
// 如果text的长度等于target的长度，那么就只需要比较一次
// 如果text的长度大于target的长度，那么就需要比较text.size() - target.size() + 1次
// 如果text的长度小于target的长度，那么就不用比较了
// 如果text的长度等于target的长度，那么就只需要比较一次
// 如果text的长度大于target的长度，那么就需要比较text.size() - target.size() + 1次
// 如果text的长度小于target的长度，那么就不用比较了
// 如果text的长度等于target的长度，那么就只需要比较一次
// 如果text的长度大于target的长度，那么就需要比较text.size() - target.size() + 1次
// 如果text的长度小于target的长度，那么就不用比较了
// 如果text的长度等于target的长度，那么就只需要比较一次
// 如果text的长度大于target的长度，那么就需要比较text.size() - target.size() + 1次
// 如果text的长度小于target的长度，那么就不用比较了
// 如果text的长度等于target的长度，那么就只需要比较一次
// 如果text的长度大于target的长度，那么就需要比较text.size() - target.size() + 1次
int main() {
    string text, target;
    while (cin >> text >> target) {
        if (text.size() == 0 && target.size() == 0) {
            break;
        }
        if (text.size() == 1 && target.size() == 1) {
            cout << 0 << endl;
            continue;
        }
        if (text.size() == 0) {
            cout << endl;
            continue;
        }
        if (text.size() < target.size()) {
            cout << endl;
            continue;
        }
        vector<int> res;
        int len = target.size();
        for (int i = 0; i < text.size() - len + 1; i++) {
            if (text[i] == target[0]) {
                bool flag = true;
                for (int j = 0; j < len; j++) {
                    if (text[i + j] != target[j]) {
                        flag = false;
                        break;
                    }
                }
                if (flag) {
                    res.push_back(i);
                }
            }
        }
        for (int i = 0; i < res.size(); i++) {
            cout << res[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
