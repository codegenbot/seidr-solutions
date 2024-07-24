#include <stdio.h>
#include <vector>
using namespace std;

vector<int> eat(int number, int need, int remaining) {
    int eaten = number + (need - remaining > 0 ? need - remaining : 0);
    int left = max(0, remaining - need + number);
    return {eaten, left};
}