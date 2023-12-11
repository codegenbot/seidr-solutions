
The problem description specifies that the first index where the sum of all integers from the start of the vector is negative should be returned. However, the current implementation has two issues:
1. It does not check if the current element is negative before adding it to the sum. This means that even if a negative element is found later in the array, the function will return immediately without checking any other elements.
2. It returns -1 for arrays with no negative elements, but this is not specified in the problem description.
Here's an updated version of the code that addresses these issues:
```
def get_negative_sum_index(arr):
    curr_sum = 0
    for i in range(len(arr)):
        if arr[i] < 0:
            return i
        else:
            curr_sum += arr[i]
    return -1
```