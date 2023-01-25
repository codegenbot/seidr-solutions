#include <vector>
#include <iostream>
#include <string>
#include <cstring>
#include <queue>
#include <stdio.h>
#include <math.h>
#include <map>
#include <set>
#include <stack>
#include <climits>
using namespace std;
/*
Given a vector of positive integers, return a vector of the leaders in that vector. A leader is deﬁned as a number that is greater than or equal to all the numbers tothe right of it. The rightmost element is always a leader.
For example,
input:
0

output:
0
input:
1
0
output:
10
input:
1
451
output:
1451
input:
2
1000 0
output:
21000 0
input:
2
0 1000
output:
11000
*/
/*

1. This is a very simple problem when we are able to modify the given vector.
2. In this case, we check from the end of the vector, and from the end, we keep a max
so far.
For example,
input:
1
451
output:
1451
the max so far is 1, and we check the next element, it is bigger than the max so far,
which is 1, so we make the max so far 451. Then we print out the number and the
max so far, that is 1. Then we pop back the last element and make the max so far
1 again, then we print out the max so far 1.
3. For the second implementation, we use a stack.
4. We keep pushing into the stack, and once we find that the element is bigger than the
top of the stack, we pop out all the elements in the stack and push this element into
the stack.
5. For example,
input:
1
451
output:
1451
we push 1 into the stack, and for 451, we find that it is bigger than the top of the
stack, which is 1, so we pop out 1, and push 451 into the stack.
6. For the third implementation, we pass the test.
7. However, we are not allowed to modify the vector in the question.
8. So we are not able to use the second and third implementations.
9. And we can only use the first implementation.
10. The code is simple and we just need to pay attention to the corner cases.
11. For example,
input:
0
output:
0
we need to handle this case.
12. And I need to pay attention to the case when the input is a number bigger than 10
and there are multiple digits.
13. For example,
input:
11
output:
11

*/
void helper(vector<int> &nums, int &maxSoFar) {
    int n = nums.size();
    if (n == 0) return;
    int cur = nums.back();
    nums.pop_back();
    maxSoFar = max(maxSoFar,cur);
    helper(nums, maxSoFar);
    nums.push_back(cur);
    cout << maxSoFar << endl;
}
void leaders(vector<int> nums) {
    int maxSoFar = -1;
    helper(nums, maxSoFar);
}

int main() {
    vector<int> nums = {1, 451};
    leaders(nums);
}
