#include <vector>
#include <iostream>
#include <string>
#include <cstring>
#include <stdio.h>
#include <math.h>
#include <iomanip>
#include <map>
#include <set>
#include <stack>
#include <queue>
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
float bounciness(float height,float first)
{
    return first/height;
}
float numdisc(float firstd,float bef,float af,int m)
{
    auto height = firstd / bef;
    auto index = height / af;
    auto dis = height;
    if (m == 0)
        return firstd;

    if(index >= 1)
    {
        for (int i = 1; i < m;i++)
        {
            height = height / bef;
            dis += height;
            index = height / af;
            if (index < 1)
                return dis;
        }
    }else{
        height = height * af;
        dis += height;
        index = height / bef;
        while (index < 1)
        {
            height = height * af;
            dis += height;
            index = height / bef;
        }
        for (int i = 0; i < m - 2;i++)
        {
            height = height / bef;
            dis += height;
            index = height / af;
        }
    }
    cout << dis << endl;
    return dis;
}
int main() {
    int m;
    float af ,bef;
    float first;
    std::cin >> first >> bef >> m;
    af = bounciness(first,bef);
    cout<<fixed<<setprecision(6)<<numdisc(first,bef,af,m)<<endl;
}
