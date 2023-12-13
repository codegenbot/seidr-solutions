```python
def basement(nums):
    total_sum = 0
    for i in range(len(nums)):
        total_sum += nums[i]
        if total_sum < 0:
            return i
    return -1

# Reading input from user
n = int(input())
nums = []
for _ in range(n):
    nums.append(int(input()))

# Calling the basement function and printing the result
print(basement(nums))
```