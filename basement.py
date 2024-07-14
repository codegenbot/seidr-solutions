Here is the Python solution for the problem:

```
def basement(nums):
    total = 0
    index = 0
    while True:
        total += nums[index]
        if total < 0:
            return index
        index += 1