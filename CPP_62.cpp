/*
xs represent coefficients of a polynomial.
xs{0} + xs{1} * x + xs{2} * x^2 + ....
 Return derivative of this polynomial in the same form.
>>> derivative({3, 1, 2, 4, 5})
{1, 4, 12, 20}
>>> derivative({1, 2, 3})
{2, 6}
*/
#include<stdio.h>
#include<math.h>
#include<vector>
using namespace std;
vector<float> derivative(vector<float> xs){
	vector<float> result;
	float a;
	for(int i=0;i<xs.size();i++){
		a=xs[i]*(i+1);
		result.push_back(a);
	}
	result.erase(result.begin());
	return result;
}
