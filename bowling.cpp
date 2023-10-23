#include<bits/stdc++.h>
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

int dp[1000010];
int main() {
	dp['X']=10;
	dp['-']=0;
	dp['/']=10;
	dp['0']=0;
	dp['1']=1;
	dp['2']=2;
	dp['3']=3;
	dp['4']=4;
	dp['5']=5;
	dp['6']=6;
	dp['7']=7;
	dp['8']=8;
	dp['9']=9;
	string s;
	getline(cin,s);
	int cnt=1;
	int score=0;
	for(int i=0;i<s.size();i++){
		if(i!=0&&cnt%2==0){
			cnt=1;
		}
		if(s[i]=='X'){
			score+=dp[s[i]];
			if(i+1<s.size()&&s[i+1]=='X'){
				score+=10+dp[s[i+1]];
			}else if(i+1<s.size()&&dp[s[i+1]]!=10){
				score+=dp[s[i+1]];
			}
			if(i+2<s.size()&&s[i+2]=='X'){
				score+=10;
			}else if(i+2<s.size()&&dp[s[i+2]]!=10&&dp[s[i+1]]!=10){
				score+=dp[s[i+2]];
			}
		}else if(s[i]=='/'){
			score+=(10-dp[s[i-1]]+dp[s[i]]);
			if(i+1<s.size()&&s[i+1]=='X'){
				score+=10;
			}else if(i+1<s.size()&&dp[s[i+1]]!=10){
				score+=dp[s[i+1]];
			}
		}else if(s[i]=='-'){
			continue;
		}else{
			score+=dp[s[i]];
		}
		cnt++;
	}
	printf("%d\n",score);
    return 0;
}
