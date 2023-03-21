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
ab
b
output:
0
1

input:
!@#$%^&*()
!@#$%^&*()
output:
0
1
2
3
4
5
6
7
8
9
1

input:
fdsafdsa
fdsa
output:
0
3
5


input:
hihihihihihihihihihihihi
hi
output:
0
2
3
4
5
6
7
8
9
10
11
12
13
14


input:
############
#
output:
12
0 1 2 3 4 5 6 7 8 9 10 11
*/
int main() {
