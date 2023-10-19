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
Given a starting height and a height after the ﬁrst bounce of a dropped ball, calculate the bounciness index (height of ﬁrst bounce / starting height). Then, given a number of bounces, use the bounciness index to calculate the total distance that the ball travels across those bounces.
For example,
input:
1.001
1.0
1
output:
2.001
input:
100.0
99.999
20
output:
3999.599534511501
input:
100.0
1.0
20
output:
102.02020201974588
input:
15.319
5.635
1
output:
20.954
input:
2.176
1.787
1
output:
3.963
*/

double calculate(double num, double pers){
    if(pers == 1) return num;
    else return num * pers;
}

int findValue(double num ,double pers,int counter){
    if(counter == 0) return 0;
    double counterValue = calculate(num, pers);
    double nextValue = counterValue - (counterValue - num);
    return 1 + findValue(counterValue,pers,counter-1);
}

int main()
{
    double a,b,c;
    cout<<"Please Enter height a:";cin>>a;cout<<endl;
    cout<<"Please Enter height b:";cin>>b;cout<<endl;
    cout<<"Please Enter Counter:";cin>>c;cout<<endl;
    double result = findValue(a,b,c);
    std::cout<<"Counter is:"<<result;

//  Program is correctly calculate 1.001\n1.0\n1 -> 2.001

}
