```python
def basement(nums):
    total = 0
    basement_reached = False
    for i in range(len(nums)):
        total += nums[i]
        if total < 0:
            basement_reached = True
        elif basement_reached:
            return i + 1
    return -1