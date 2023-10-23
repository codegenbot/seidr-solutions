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
/*用两个变量分别记录每一帧和总的分数，用一个循环记录10次即可。
但是如果一帧既有斩杀又有平杀，那么怎么处理呢？就是把斩杀先按斩杀处理，不算在帧分里面，然后所有的帧分加上来。
如果只有斩杀，那么就把下一帧的第一次丢球和第二次丢球加到此帧，并且把帧序提前一帧。
如果只有平杀，那么就把下一帧的第一次丢球加到此帧，并且把帧序提前一帧。
如果在第10帧的第一次丢球时有斩杀，那么就让第二次丢球继续丢，反正是不会换下一帧的。
*/

char sk1,sk2;
int countScore(string str){
	int frame = 1;
	int score = 0;
	int len = str.size();
	for(int i = 0;i < len;i++){
		//由于第10帧需要再丢2次球，所以i+=在循环体的最后，而不在i++中，以免越界。
		//同时为了第10帧中有斩杀的情况，在循环体中不能加i++
		sk1 = str[i];
		
		if(sk1 == '-'){
			continue;
		}
		if(sk1 == 'X'){
			score += 10;
		}else if(sk1 == '/'){
			score += (10 - (str[i-1] - '0'));
		}else{
			score += (sk1 - '0');
		}
		

		if(frame < 10){
			i++;
			sk1 = str[i];
			if(sk1 == 'X'){
				i++;
				sk2 = str[i];
				if(sk2 == 'X'){
					score += 20;
				}else if(sk2 == '/'){
					score += 10;
				}else{
					score += (sk2 - '0');
				}
			}else if(sk1 == '/'){
				i++;
				sk2 = str[i];
				if(sk2 == 'X'){
					score += 10;
				}else if(sk2 == '/'){
					score += 10;
				}else{
					score += (sk2 - '0');
				}
			}
		}

		frame++;
	}
	return score;
}
int main() {
	string str;
	while(cin >> str){
		int score = countScore(str);
		cout << score << endl;
	}

	return 0;
}
