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
Given a string representing the individual bowls in a 10-frame round of 10 pin bowling, return the score of that round.
For example,
input:
--------------------
output:
0
input:
XXXXXXXXXXXX
output:
300
input:
5/5/5/5/5/5/5/5/5/5/5
output:
150
input:
7115XXX548/279-X53
output:
145
input:
532/4362X179-41447/5
output:
100
*/

class Solution {
public:
    int SimpleScore(string d, int &idx){
        int sum = 0;
        if(d[idx] == 'X'){
            sum += 10;
            if(idx + 3 < d.size() && (d[idx + 2] == 'X' || d[idx + 2] == '/'))
                sum += 10;
            if(idx + 4 < d.size() && d[idx + 2] == 'X' && d[idx + 4] == 'X')
                sum += 10;
            if(idx + 4 < d.size() && d[idx + 2] == 'X' && d[idx + 4] == '/')
                sum += 10;
            if(idx + 5 < d.size() && d[idx + 2] == '/' && d[idx + 4] == 'X')
                sum += 10;
            if(idx + 3 < d.size() && d[idx + 3] != 'X' && d[idx + 3] != '/')
                sum += d[idx + 3] - '0';
        } else if(d[idx] == '/'){
            sum += 10 - (d[idx - 1] - '0');
            if(idx + 2 < d.size() && d[idx + 1] == 'X')
                sum += 10;
            if(idx + 3 < d.size() && d[idx + 1] == '/')
                sum += 10;
            if(idx + 2 < d.size() && d[idx + 1] != '/' && d[idx + 1] != 'X')
                sum += d[idx + 1] - '0';
        } else {
            sum += d[idx] - '0';
        }
        return sum;
    }
    int bowling_score(string d) {
        int idx = 0;
        int sum = 0;
        while(idx < d.size()){
            sum += SimpleScore(d, idx);
            idx++;
        }
        return sum;
    }
};

int main() {
    Solution s;
    cout << s.bowling_score("XXXXXXXXXXXX") << endl; // 300
    cout << s.bowling_score("9-9-9-9-9-9-9-9-9-9-") << endl; // 90
    cout << s.bowling_score("5/5/5/5/5/5/5/5/5/5/5") << endl; // 150
    cout << s.bowling_score("7115XXX548/279-X53") << endl; // 145
    cout << s.bowling_score("532/4362X179-41447/5") << endl; // 100
    cout << s.bowling_score("8/6X5/X725/1X7/9") << endl; // 150
    return 0;
}
