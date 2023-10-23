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
Peter has an n-sided die and Colin has an m-sided die. If they both roll their dice at the same time, return the probability that Peter rolls strictly higher than Colin.
For example,
input:
1
2
output:
0.0
input:
2
1
output:
0.5
input:
99
100
output:
0.49
input:
100
99
output:
0.5
input:
1
100
output:
0.0
*/
/*Suppose Peter is rolling from N sides and Colin is rolling from M side;
suppose N<=M
now if peter rolls a number equal to colins no of sides then theres a 0% chance of winning,
since colin can succesfully roll to every number from colin's range.

then maximum possible probabilty for peter is 1-(1/M) since it will be maximum chance that P wins.
i.e dropping the chance for colin to win completely.

for Peter to win, atleast one of the sides in Peters Range must be greater than colin's side/sides; - this is intuitive as we find the probabilty for 
acceptance condition.
{greterThan=N-1}/{possibleValues = M}

Maximum_Possible_Probabilty = 1 / M
the Highest_Probabilty_for_strickly_higher {greaterThan = N-1} / possibleValues{=M}
Max_Of(Highest_Probabilty_for_strickly_higher,1 / M)
(N-1)/M
here m!=n
*/
int main() {
