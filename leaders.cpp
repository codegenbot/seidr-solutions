#include <vector>
#include <stack>
#include <algorithm> // for reverse
#include <iostream>

using namespace std;

vector<int> findLeaders(const vector<int>& nums) {
    vector<int> leaders;
    stack<int> potentialLeaders;
    
    int maxRight = INT_MIN;
    
    for (int num : nums) {
        while (!potentialLeaders.empty() && potentialLeaders.top() < num) {
            potentialLeaders.pop();
        }
        potentialLeaders.push(num);
    }

    while (!potentialLeaders.empty()) {
        leaders.push_back(potentialLeaders.top());
        potentialLeaders.pop();
    }
    
    reverse(leaders.begin(), leaders.end());
    
    return leaders;
}