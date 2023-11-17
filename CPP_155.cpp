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
    vector<int> eve_odd ={0,0};
    int tek= 0;
    int ch=0;
    if((num<0)&&(num%2 == 1))
    {
        num *= -1;
        tek += 1;
    }
    else if(num<0)
    {
        num = -num;
    }
    while (num!=0)
    {
        ch=num%10;
        if((ch%2 != 0)&&(ch!=0))
        {
            tek+=1;
        }
        else if((ch%2 ==0)&&(ch!=0))
        {
            eve_odd[0] +=1;
        }
        num/=10;
    }
    eve_odd[1] += tek;
    return eve_odd;
}
int main()
{
	int num = -12;
	vector<int> answer=even_odd_count(num);
	printf ("even:%d\nodd:%d", answer[0], answer[1]);
	return 0;
}
using namespace std;
vector<int> even_odd_count(int num){
