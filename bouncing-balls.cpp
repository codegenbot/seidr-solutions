#include <vector>
#include <iostream>
#include <string>
#include <cstring>
#include <queue>
#include <stdio.h>
#include <math.h>
#include <map>
#include <set>
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
double bounciness_index(double height1, double height2){
    return height2 / height1;
}

double distance(double bounciness_index, int num_of_bounce){
    double res = 0.0;
    for(int i = 0; i < num_of_bounce; i++) {
        res += bounciness_index;
        bounciness_index *= bounciness_index;
    }
    return res;
}

int main() {
    double start_height, second_height;
    cin >> start_height >> second_height;

    int num_of_bounce;
    cin >> num_of_bounce;

    double bounciness_idx = bounciness_index(start_height, second_height);
    // cout << bounciness_idx << endl;

    double total_distance = distance(bounciness_idx, num_of_bounce);
    cout << total_distance << endl;
}
