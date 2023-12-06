Solve the following code contest problem: basement. Problem description: Given a vector of integers, return the first index such that the sum of all integers from the start of the vector to that index (inclusive) is negative..
Currently, the code is 
```
int basement(vector<int>& nums) {
    int prev = 0;
    for (int i = 1; i < nums.size(); i++) {
        if (nums[i] <= prev) {
            return i;
        }
        prev = nums[i];
    }
    return -1;
}
```
Modify the code as  
In order to correct the errors, you should delete all the unnecessary backticks (`) from the code and add a semicolon at the end of the first line of code:

int basement(vector<int>& nums) {
    int prev = 0;
    for (int i = 1; i < nums.size(); i++) {
        if (nums[i] <= prev) {
            return i;
        }
        prev = nums[i];
    }
    return -1;
}

Additionally, you should add the following line at the top of your code to include the vector header file:

#include <vector>.
You must only return correct code. Remove any triple quotes, language name or explanations.