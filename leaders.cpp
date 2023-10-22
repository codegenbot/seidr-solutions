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


void print_vector(vector<int>& vec) {
    for (int i = 0; i < vec.size(); i++) {
        cout << vec[i] << " ";
    }
    cout << endl;
}

int main() {
    vector<int> input;
    int tmp;
    while (scanf("%d", &tmp) == 1) {
        input.push_back(tmp);
    }
    vector<int> res;
    int max = input[input.size()-1];
    res.push_back(max);
    for (int i = input.size() - 2; i >= 0; i--) {
        if (input[i] >= max) {
            res.push_back(input[i]);
            max = input[i];
        }
    }
    print_vector(res);
    return 0;
}
