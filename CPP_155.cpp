/*
Given an integer. return a vector that has the number of even and odd digits respectively.

 Example:
    even_odd_count(-12) ==> {1, 1}
    even_odd_count(123) ==> {1, 2}
*/
#include<stdio.h>
#include<math.h>
#include<string>
#include<vector>

using namespace std;
vector<int> even_odd_count(int num){
		vector<int> v;
		int even = 0;
		int odd = 0;
		while (num>0)
		{
			if (num % 2 == 0)
			{
				even++;
			}
			else
			{
				odd++;
			}
			num /= 10;
		}
		v.push_back(even);
		v.push_back(odd);
		return v;
}
int main(){
	vector<int> v = even_odd_count(-12);
	printf("%d, %d", v[0], v[1]);
}
