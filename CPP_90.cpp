#include <vector>
#include <algorithm>

int next_larger(std::vector<int>& nums) {
    std::stack<int> stack;
    int max = -1;
    
    for(int num : nums) {
        while(!stack.empty() && stack.top() <= num) {
            stack.pop();
        }
        
        if(!stack.empty()) {
            max = stack.top();
        } 
        stack.push(num);
    }

    return max;
}