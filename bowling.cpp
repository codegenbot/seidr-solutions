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
given an array of numbers write a function that tells if there are two values in the array that can add up to a certain number

example:
arr = [1,2,3,4,5]
sum = 10
output: true

arr = [1,2,3,4,5]
sum = 15
output: false

*/

bool inArray(vector<int> arr, int sum, int x){
    for(int i = 0; i < arr.size(); i++){
        if(arr[i] == x)
            return false;
    }
    return true;
}

bool sum2(vector<int> arr, int sum){
    for(int i = 0; i < arr.size(); i++){
        if(inArray(arr, sum, sum - arr[i])){
            cout << arr[i] << " " << sum - arr[i] << endl;
            return true;
        }
    }
    return false;
}

int main() {
    int x = 10;
    vector<int> arr = {1,2,3,4,5};
    cout << sum2(arr, x);

    return 0;
}


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
