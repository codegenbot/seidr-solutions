/*
You are given a vector of numbers.
You need to return the sum of squared numbers in the given vector,
round each element in the vector to the upper int(Ceiling) first.
Examples:
For lst = {1,2,3} the output should be 14
For lst = {1,4,9} the output should be 98
For lst = {1,3,5,7} the output should be 84
For lst = {1.4,4.2,0} the output should be 29
For lst = {-2.4,1,1} the output should be 6


*/
#include<stdio.h>
#include<math.h>
#include<vector>
using namespace std;
    float x;
    for(int i=0; i<lst.size(); i++){
        x += (ceil(lst[i]*lst[i]));
    }
    return x;
}
int main(){
	vector<float> v = {1,2,3};
	printf("%f\n",sum_squares(v));
	vector<float> n = {1,4,9};
	printf("%f\n",sum_squares(n));
	vector<float> o = {1,3,5,7};
	printf("%f\n",sum_squares(o));
	vector<float> p = {1.4,4.2,0};
	printf("%f\n",sum_squares(p));
	vector<float> f = {-2.4,1,1};
	printf("%f\n",sum_squares(f));
}
int sum_squares(vector<float> lst){
