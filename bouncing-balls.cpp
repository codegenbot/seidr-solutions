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
/*
 The main idea is
 distance = rebounds
 rebounds * bounciness = total distance
*/

// calculate the total distance of one drop, relative position
#define numspace 0.0001
double distOneDrop(const double& bounceHeight, const double& height, const int& bulls, const int& bear, const double& dropAmt){
    // base case of no rebound
    if (bounceHeight <= numspace){
        return height;
    }
    
    double currentHeight = height;
    double maxHeight = height;
    if (bear == 0){
        currentHeight /= bounceHeight;
        maxHeight /= bounceHeight;
        return height /= bounceHeight;
    }else if (bulls == 0){
        currentHeight = bounceHeight - height;
        maxHeight = bounceHeight;
        return height * (bounceHeight / dropAmt);
    }
    
    if (currentHeight > maxHeight)
        maxHeight = currentHeight;
    
    // DFS
    // bulls
    if (bulls > 0){
        currentHeight *= bounceHeight;
        if (currentHeight > maxHeight)
            maxHeight = currentHeight;
        if (!bear)
            maxHeight = distOneDrop(bounceHeight, currentHeight, bulls, bear, dropAmt);
        else
            maxHeight = distOneDrop(bounceHeight, currentHeight, bulls, bear - 1, dropAmt);
    }
    currentHeight = height;
    
    // bear
    if (bear > 0){
        currentHeight /= bounceHeight;
        if (currentHeight > maxHeight)
            maxHeight = currentHeight;
        maxHeight = distOneDrop(bounceHeight, currentHeight, bulls, bear - 1, dropAmt);
        if (currentHeight > height)
            maxHeight = distOneDrop(bounceHeight, currentHeight, bulls - 1, bear, dropAmt);
        else
            maxHeight = distOneDrop(bounceHeight, currentHeight, bulls, bear, dropAmt);
    }
    return maxHeight;
}

double bounciness(double height, double bounceHeight, int numRebounds){
    if (numRebounds == 0){
        return height;
    }
    
    double result;
    int drops;
    if (height > bounceHeight)
        drops = numRebounds / 2;
    else
        drops = numRebounds;
    
    result = distOneDrop(bounceHeight, height, numRebounds - drops, drops, height);
    return result;
}

int main() {
    double height, bounceHeight;
    int rebounds;
    cin >> height >> bounceHeight >> rebounds;
    double result = bounciness(height, bounceHeight, rebounds);
    
    cout << result << endl;
    return result == 2.001000000000001;
}
// 1.001
// 1.0
// 1
