/*
Given a non-empty vector of integers arr and an integer k, return
the sum of the elements with at most two digits from the first k elements of arr.

Example:

    Input: arr = {111,21,3,4000,5,6,7,8,9}, k = 4
    Output: 24 # sum of 21 + 3

Constraints:
    1. 1 <= len(arr) <= 100
    2. 1 <= k <= len(arr)
*/
using namespace std;
int add_elements(vector<int> arr,int k){
    int sum = 0; // line 20: warning: no return statement in function returning non-void [-Wreturn-type]
    for(int i = 0; i < k; ++i){ // line 21: warning: left operand of comma expression has no effect [-Wunused-value]
        if(arr[i] < 100){ // line 22: warning: left operand of comma expression has no effect [-Wunused-value]
            sum += arr[i]; // line 23: warning: left operand of comma expression has no effect [-Wunused-value]
        } // line 24: warning: left operand of comma expression has no effect [-Wunused-value]
    }
    return sum; // line 27: warning: no return statement in function returning non-void [-Wreturn-type]
} // line 28: error: expected ‘}’ at end of input
