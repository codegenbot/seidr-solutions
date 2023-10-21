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
#include <sstream>
using namespace std;
/*
 Given: Comprises a number that is displayed for a speciﬁc amount of time, followed by two integers, and ﬁnally a newline character.
 CHALLENGE: Parse the input to extract the multi-digit number and calculate the sum of the digits contained within that number. Follow the instructions below for a further challenge.
 input
 61621    12345    157
 output
 23
 input
 22342   25412 13578
 output
 33
*/
class Solution {
public:
    void parseInput() {
        string s;
        int res = 0, num;
        while (cin >> s) {
            int i;
            for (i = 0; i < s.size(); i++) {
                if (s[i] < '0' || s[i] > '9')
                    break;
            }
            if (i == s.size()) {
                stringstream ss(s);
                ss >> num;
                res += num;
            }
        }
        cout << res << endl;
    }
};

int main() {
    Solution s;
    s.parseInput();
    return 0;
}
