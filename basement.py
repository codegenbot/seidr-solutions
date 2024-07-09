```python
def basement(nums):
    for i in range(len(nums)):
        s = 0
        j = i
        while s < 0:
            s += nums[j]
            if s < 0:
                return j
            j += 1
    return -1