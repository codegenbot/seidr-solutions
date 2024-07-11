#include <iostream>
#include <vector>
using namespace std;

vector<int> eat(int number, int need, int remaining) {
    if(need > remaining)
        return vector<int>{}; 
    int total = number + need;
    int left = remaining - min(remaining, need);
    vector<int> result = {total, left};
    return result;
}