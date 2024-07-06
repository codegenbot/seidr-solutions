#include <stdio.h>
#include <vector>
using namespace std;

vector<int> eat(int number, int need, int remaining) {
    vector<int> result;
    int total = number + need;
    int left = min(remaining, need);
    if (total > remaining) {
        result.push_back(total);
        result.push_back(0);
    } else {
        result.push_back(total);
        result.push_back(remaining - left);
    }
    return result;
}