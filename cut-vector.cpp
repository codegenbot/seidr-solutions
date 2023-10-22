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
Given a vector of positive integers, ﬁnd the spot where, if you cut the vector, the numbers on both sides are either equal, or the diﬀerence is as small as possible. Return the two resulting subvectors as two outputs.
For example,
input:
1
0

input:
1
10

input:
1
100

input:
1
1000

input:
1
10000

*/




int main() {
    vector<int>inputs;
    int temp;
    cin >> temp;
    while (temp != 0) {
        inputs.push_back(temp);
        cin >> temp;
    }
    // do
    for (int i = 1; i < inputs.size(); i++) {
        int large;
        int small;
        if (inputs[i-1] > inputs[i]) {
            large = inputs[i-1];
            small = inputs[i];
        } else {
            large = inputs[i];
            small = inputs[i-1];
        }
        if (large % small == 0) {
            cout << large << endl;
            cout << small << endl;
            cout << 0 << endl << endl;
        } else {
            int dig = large % small;
            if (dig * 2 > small) {
                cout << large << endl;
                cout << small << endl;
                cout << 0 << endl << endl;
            } else {
                cout << small << endl;
                cout << large - small << endl;
                cout << 0 << endl << endl;
            }
        }
    }
    
}











