#include <iostream>
#include <vector>

using namespace std;

vector<int> eat(int number, int need, int remaining) {
    vector<int> result;
    if (number + need <= remaining) {
        result.push_back(number + need);
        result.push_back(remaining - (number + need));
    } else {
        result.push_back(number + need);
        result.push_back(0);
    }
    return result;
}