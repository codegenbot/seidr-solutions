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
//第一个跳的高度记为h，第二个跳的高度记为h1，第三个跳的高度记为h2，第四个跳的高度记为h3，……
//那么第二个跳的高度h1=h*bounciness
//第三个跳的高度h2=h1*bounciness=h*bounciness*bounciness
//第四个跳的高度h3=h2*bounciness=h*bounciness*bounciness*bounciness
//……
//第n个跳的高度hn=h*bounciness^(n-1)
//那么经过n次跳后总共移动的距离为：
//h+(h*bounciness^1)+(h*bounciness^2)+(h*bounciness^3)+……+(h*bounciness^(n-1))
//=h*(1+bounciness^1+bounciness^2+bounciness^3+……+bounciness^(n-1))
//=h*(1+bounciness+bounciness^2+bounciness^3+……+bounciness^(n-1))
//=h*(bounciness^n-1)/(bounciness-1)
//注意：当bounciness=1时，经过n次跳后总共移动的距离为：h*n
int main() {
    double h, b, n;
    while(cin >> h >> b >> n){
        if(b == 1)
            printf("%.3f\n", h*n);
        else
            printf("%.3f\n", h*(pow(b, n)-1)/(b-1));
    }
    return 0;
}
