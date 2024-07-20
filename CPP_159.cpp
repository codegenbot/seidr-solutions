#include <iostream>
#include <vector>
using namespace std;

vector<int> eat(int number, int need, int remaining) {
    vector<int> result;
    
    // Calculate the total number of eaten carrots after meals
    int total = number + need;
    
    // Calculate the number of carrots left after meals
    int left = max(0, remaining - (need - (total - number)));
    
    result.push_back(total);
    result.push_back(left);
    
    return result;
}

int main() {
    vector<int> output = eat(5, 6, 10);
    cout << "Total: " << output[0] << ", Left: " << output[1] << endl;

    return 0;
}