Solve the following code contest problem: basement. Problem description: Given a vector of integers, return the first index such that the sum of all integers from the start of the vector to that index (inclusive) is negative..
Currently, the code is 
```
def get_negative_sum_index(arr):
    curr_sum = 0
    for i in range(len(arr)):
        curr_sum += arr[i]
        if curr_sum < 0:
            return i
    return -1
```
Modify the code as  The issue is that the `get_negative_sum_index` function is not properly indented, which causes a SyntaxError. To fix this, you need to indent the function definition and its contents correctly. Here's an example of how the code should look like:
```
def get_negative_sum_index(arr):
    curr_sum = 0
    for i in range(len(arr)):
        curr_sum += arr[i]
        if curr_sum < 0:
            return i
    return -1
```
You must only return correct code. Remove any triple quotes, language name or explanations.