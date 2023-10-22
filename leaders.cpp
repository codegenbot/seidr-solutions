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
Given a vector of positive integers, return a vector of the leaders in that vector. A leader is deﬁned as a number that is greater than or equal to all the numbers tothe right of it. The rightmost element is always a leader.
For example,
input:
0

output:
0

input:
1
0
output:
1
0
input:
1
451
output:
1
451
input:
2
1000 0
output:
2
1000 0
input:
2
0 1000
output:
1
1000
*/
int main() {
    int N;
    int i = 1;
    while(cin >> N) {
        int maxNum = -1;
        vector<int> leader;
        while(N-- > 0) {
            int input;
            cin >> input;
            if(input >= maxNum) {
                maxNum = input;
                leader.push_back(input);
            }
        }
        cout << "input:" << endl;
        cout << input.size() << endl;
        for(int i = 0; i < input.size(); i++) {
            cout << input[i];
            if(i != input.size() - 1)
                cout << " ";
        }
        cout << "output:" << endl;
        cout << leader.size() << endl;
        for(int i = leader.size() - 1; i >= 0; i--) {
            cout << leader[i];
            if(i != 0)
                cout << " ";
        }
        cout << endl;
        i++;
    }
    
    return 0;
}
