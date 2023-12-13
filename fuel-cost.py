```python
def fuel_cost(nums):
    return sum(map(lambda x: int(x)//3 - 2, nums.split()))
```