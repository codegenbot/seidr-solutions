```python
def fuel_cost(nums):
    return sum((num // 3) - 2 for num in nums)

nums = []
for _ in range(int(input())):
    nums.append(int(input()))

result = fuel_cost(nums)
print(result)
```