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

int solution(string& s) {
	int res = 0;
	int turn = 0;
	for(int i = 0; i < s.size(); i++) {
		char cur = s[i];
		if(cur == 'X') {
			if(turn == 10)
				continue;
			res += 10;
			if(i < s.size()-2 && s[i+2] == 'X')
				res += 10;
			else if(s[i+2] == '/')
				res += 10 - (s[i+1]-'0');
			else
				res += s[i+1]-'0' + s[i+2]-'0';
			turn++;
		}else if(cur == '/') {
			if(turn == 10)
				continue;
			res += (10 - (s[i-1]-'0'));
			turn++;
		}else if(cur == '-') {
			if(turn == 10)
				continue;
			turn++;
		}else {
			res += cur-'0';
			turn++;
		}
	}
	return res;
}

int main() {
	string s;
	while(cin >> s) {
		cout << solution(s) << endl;
	}
	return 0;
}
