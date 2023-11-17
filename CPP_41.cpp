/*
Imagine a road that's a perfectly straight infinitely long line.
n cars are driving left to right;  simultaneously, a different set of n cars
are driving right to left.   The two sets of cars start out being very far from
each other.  All cars move in the same speed.  Two cars are said to collide
when a car that's moving left to right hits a car that's moving right to left.
However, the cars are infinitely sturdy and strong; as a result, they continue moving
in their trajectory as if they did not collide.

This function outputs the number of such collisions.
*/
#include<stdio.h>
using namespace std;
int car_race_collision(int n){
	int count = 0;
	int i = 0;
	int j = 0;
	int left[n];
	int right[n];
	for(i = 0; i < n; i++){
		scanf("%d", &left[i]);
	}
	for(i = 0; i < n; i++){
		scanf("%d", &right[i]);
	}
	for(i = 0; i < n; i++){
		for(j = 0; j < n; j++){
			if(left[i] == right[j]){
				count++;
			}
		}
	}
	return count;
}
int main(){
	int n;
	scanf("%d", &n);
	printf("%d\n", car_race_collision(n));
	return 0;
}
