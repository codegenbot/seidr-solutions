/*
Return true is vector elements are monotonically increasing or decreasing.
>>> monotonic({1, 2, 4, 20})
true
>>> monotonic({1, 20, 4, 10})
false
>>> monotonic({4, 1, 0, -10})
true
*/
#include<stdio.h>
#include<vector>
using namespace std;
bool monotonic(vector<float> l){
	int i=1;
	int n=l.size();
	while(i<n && l[i]>=l[i-1]){
		i++;
	}
	if(i==n) return true;
	i=1;
	while(i<n && l[i]<=l[i-1]){
		i++;
	}
	if(i==n) return true;
	return false;
}
int main(){
	vector<float> l;
	float x;
	scanf("%f",&x);
	while(x!=0){
		l.push_back(x);
		scanf("%f",&x);
	}
	printf("%d\n",monotonic(l));
	return 0;
}
