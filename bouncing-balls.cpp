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
int main() {
    //输入
    double l = 0.0;
    cin >> l;
    double h = 0.0;
    cin >> h;
    int factor = 4;
    int dir = -1;
    int n = 0; cin >> n;
    double c = h / l; //bounciness index
    
    //1: assume once and
    if (n == 1) {
        cout << l * 2 << endl;
        return 0;
    }
     -  -  -  -  - 
        -  -  -  -  - 
            -  -  -  -  - 
                -  -  -  -  - 
        1 + c + c^2 + c^3
        -  -  -  -  - 
            -  -  -  -  - 
                -  -  -  -  - 
    double rel = pow(c, (n-1)) + pow((1-c), (n-1)) * n;
    
    cout << l * rel << endl;
    
    
    return 0;
}
