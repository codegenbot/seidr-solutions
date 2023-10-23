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
int GetScore(string throws){
	int score = 0;
	int frame = 0;
	int frameBall = 0;
	int frame_x_flag = 0;
	int frame_s_flag = 0;
	int frame_n_flag = 0;
	int value = 0;
	int frame_score = 0;
	for(int i = 0; i < throws.length(); i++){
		value = throws[i];
		if('X' == value){
			frameBall = 1;
			frame_x_flag = 1;
			frame_s_flag = 0;
			frame_n_flag = 0;
			frame_score = 10;
			score += 10;
		}else if('/' == value){
			frameBall++;
			frame_x_flag = 0;
			frame_s_flag = 1;
			frame_n_flag = 0;
			frame_score = 10 - frame_score;
			score += frame_score;
			score += frame_score;
		}else if('-' == value){
			frameBall++;
			frame_x_flag = 0;
			frame_s_flag = 0;
			frame_n_flag = 1;
		}else{
			frameBall++;
			frame_x_flag = 0;
			frame_s_flag = 0;
			frame_n_flag = 1;
			value -= 48;
			frame_score += value;
			score += value;
		}
		if(frameBall == 2){
			frameBall = 0;
			frame_score = 0;
			frame++;
		}
		if(frame == 10){
			break;
		}
	}
	return score;
}

int main() {
	string throws;
	cin >> throws;
	cout << GetScore(throws) << endl;
	return 0;
}
