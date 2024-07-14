```python
def fuel_cost(nums):
    return sum((n * 2) // 3 - 2 for n in nums)