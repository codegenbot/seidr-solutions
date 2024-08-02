#include <stdio.h>
#include <vector>
using namespace std;

vector<int> eat(int number, int need, int remaining) {
    vector<int> result;
    
    // Calculate total number of eaten carrots after meals
    int total = number + need;
    
    // Calculate the number of carrots left after meals
    int left = max(0, min(remaining - (total - number), 1000) - (total - number));
    
    result.push_back(total);
    result.push_back(left);
    
    return result;
}