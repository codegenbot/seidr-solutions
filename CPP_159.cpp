#include <iostream>
#include <vector>
using namespace std;

vector<int> eat(int number, int need, int remaining) {
    vector<int> result;
    
    // Calculate total eaten carrots
    int totalEaten = number + (need - remaining);
    
    // Calculate remaining carrots
    int leftCarrots = max(0, min(totalEaten, need));
    
    result.push_back(totalEaten);
    result.push_back(leftCarrots);
    
    return result;
}