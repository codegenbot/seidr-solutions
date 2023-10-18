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

void printVector(vector<int> &input) {
    for(int i = 0; i < input.size(); i++) {
        cout << input[i] << " ";
    }
    cout << endl;
}

vector<int> leader(vector<int> &input) {
    vector<int> result;
    if(input.size() == 0) return result;
    result.push_back(input[input.size() - 1]);
    int max = input[input.size() - 1];
    for(int i = input.size() - 2; i >= 0; i--) {
        if(input[i] >= max) {
            max = input[i];
            result.push_back(max);
        }
    }
    reverse(result.begin(), result.end());
    return result;
}

int main() {
    vector<int> input = {2, 1000, 0};
    vector<int> result = leader(input);
    printVector(result);
}
