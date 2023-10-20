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
class bounceCalc {
public:
    bounceCalc(double h, double n) {
        this->value = n / h;
    }
    friend double operator+ (bounceCalc& lhs, bounceCalc& rhs) {
        return lhs.value * rhs.value;
    }
    friend ostream& operator<< (ostream& os, const bounceCalc& a) {
        return os << a.value;
    }
private:
    double value;
};
int main() {
    double height;
    double maxHeight; // Use maxheight / height to calculate the bounciness and then use it with number of bounces to calculate
    long nBounces;
    while (cin >> height >> maxHeight >> nBounces) {
        // Calculate bounciness
        double bounciness = maxHeight / height;
        // Check for error
        if (bounciness <= 1) {
            cout << "Height should be greater than the first bounce height" << endl;
            continue;
        }
        // Increase height by one before starting
        double startHeight = height + 1.0;
        double acc = startHeight;
        bounceCalc a(bounciness, 1);
        for (int i = 1; i < nBounces; i++) {
            acc += a;
        }
        cout << acc << endl;
        // int test = (int)acc % 100;
        // if (test >= 50)
        //     cout << acc+(test-50)/100 << endl;
        // else
        //     cout << acc - (50-test) % 100/100 << endl;
        
    }
}
