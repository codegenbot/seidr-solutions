#include <iostream>
#include <vector>
using namespace std;

vector<int> eat(int number, int need, int remaining) {
    int total = number + need;
    int left = min(remaining, need);
    return {total, remaining - left};
}