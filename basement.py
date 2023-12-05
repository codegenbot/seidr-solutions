
```
def get_negative_sum_index(arr):
    return reduce(lambda x, y: x + y, arr[:i+1]) < 0
```
This solution uses the built-in `reduce` function in Python to calculate the sum of all elements up to and including the current element. The lambda function is used to add the current element to the previous sum. If the result is less than zero, the index is returned.