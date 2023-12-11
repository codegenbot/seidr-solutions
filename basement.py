```python
def basement(nums):
    curr_sum = 0
    for i in range(len(nums)):
        curr_sum += nums[i]
        if curr_sum < 0:
            return i
    return -1

# Read input from user
n = int(input())
nums = []
for _ in range(n):
    nums.append(int(input()))

# Call the function and print the result
print(basement(nums))
```