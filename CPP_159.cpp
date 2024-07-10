#include <iostream>
#include <vector>
using namespace std;

vector<int> eat(int number, int need, int remaining) {
    vector<int> result;
    int total = number + need;
    int leftover = min(remaining, need);
    
    if (total > remaining) {
        result.push_back(total);
        result.push_back(0);
    } else {
        result.push_back(total);
        result.push_back(remaining - need);
    }
    
    return result;
}