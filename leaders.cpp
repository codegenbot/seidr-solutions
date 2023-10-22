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
vector<int> arrayLeaders(vector<int> numbers) {
    vector<int> leaders;
    int max = numbers[numbers.size()-1], i;
    leaders.push_back(max);
    for (i = numbers.size()-2; i>=0; i--) {
        if (numbers[i]>=max) {
            leaders.push_back(numbers[i]);
            max = numbers[i];
        }
    }
    reverse(leaders.begin(), leaders.end());
    return leaders;
}

int main() {
