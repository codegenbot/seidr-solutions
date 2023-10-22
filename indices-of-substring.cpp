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
1
0
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
12
0 1 2 3 4 5 6 7 8 9 10 11
*/

// 这个题目，在网上真没有找到solution，只有一个讨论
// 这个解题方法，是我想的，但是自己写出来的代码有bug，需要debug，而且还是一个个debug，
// 所以，还是要对复杂的代码，一个个debug比较好。
// 这种题目，也是要自己回去想的
int main() {
