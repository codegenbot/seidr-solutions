Here is the completed code:

#include <iostream>
#include <vector>
using namespace std;

vector<int> eat(int number, int need, int remaining) {
    int total = number + need;
    int left = min(remaining, need - (total - 1000));
    return {total, left};
}