```
def get_negative_sum_index(arr):
    if len(arr) == 0:
        return -1
    curr_sum = 0
    for i in range(len(arr)):
        curr_sum += arr[i]
        if curr_sum < 0:
            return i
    return -1
```
The issue is that there is a stray `>` character at the end of the code block, which is causing the SyntaxError. To fix this, simply remove the extra `>` character and the code will run without any issues.