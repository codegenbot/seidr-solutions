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
#include <algorithm>
using namespace std;

/*
Given a vector of positive integers, ﬁnd the spot where, if you cut the vector, the numbers on both sides are either equal, or the diﬀerence is as small as possible. Return the two resulting subvectors as two outputs.
For example,
input:
1
0
output:
1
0
0

input:
1
10
output:
1
10
0

input:
1
100
output:
1
100
0

input:
1
1000
output:
1
1000
0

input:
1
10000
output:
1
10000
0

*/

vector<double> find_cut_point(vector<double>& inp) {
    if (inp.size() == 1 || inp.size() == 2) {
        return { inp[0], 0, inp[0] };
    }
    vector<double> ls = { inp[0] };
    vector<double> rs = { inp[1] };
    double lsum = inp[0];
    double rsum = inp[1];
    for (int i = 2; i < inp.size(); i++) {
        ls.push_back(lsum);
        rs.push_back(rsum);
        lsum += inp[i - 1];
        rsum += inp[i];
    }

    double diff = lsum - rsum;
    double cut_point = 0;
    if (diff < 0) diff *= -1;

    for (int i = 0; i < rs.size(); i++) {
        double d = ls[i] - rs[i];
        if (d < 0) d *= -1;
        if (d <= diff) {
            diff = d;
            cut_point = i;
        }
    }
    cut_point += 1;
    vector<double> res;
    for (int i = 0; i < cut_point; i++) {
        res.push_back(inp[i]);
    }
    res.push_back(0);
    sort(res.begin(), res.end(), greater<double>());
    for (int i = cut_point; i < inp.size(); i++) {
        res.push_back(inp[i]);
    }
    return res;
}

int main() {  
    //vector<double> inp = {1, 10};
    //vector<double> inp = {1, 10, 1};
    vector<double> inp = {10, 100, 1000, 10000};
    //vector<double> inp = {4, 7, 8, 3, 10};
    //vector<double> inp = {1, 10, 1, 10, 1, 10};
    //vector<double> inp = {1, 1};
    //vector<double> inp = {4, 7};
    vector<double> res = find_cut_point(inp);
    for (auto r : res) {
        cout << r << " ";
    }
    cout << endl;
    return 0; 
}
