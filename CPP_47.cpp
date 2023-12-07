#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

float median(vector<float> l) {
    sort(l.begin(), l.end());
    if (l.size() % 2 == 0) {
        return (l[l.size() / 2 - 1] + l[l.size() / 2]) / 2;
    } else {
        return l[l.size() / 2];
    }
}