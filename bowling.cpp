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
int count(string str){
    int res = 0;
    for(auto s : str){
        res += s - '0';
    }
    return res;
}

int res(string str){
    if(str.size() == 0) return 0;
    if(str[0] == 'X'){
        return 10 + res(str.substr(1));
    }
    else if(str[0] == '-'){
        return 0 + res(str.substr(1));
    }
    else if(str[1] == '/'){
        return 10 + res(str.substr(2));
    }
    else{
        return (int)(str[0] - '0') + res(str.substr(1));
    }
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
int main() {
    string s = "XXXXXXXXXXXX";
    cout << res(s);

    return 0;
}
