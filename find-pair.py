```python
def find_pair(nums, target):
    num_set = set(nums)
    for num in nums:
        complement = target - num
        if complement in num_set:
            return num, complement

# Read input from user
n = int(input())
nums = list(map(int, input().split()))
target = int(input())

# Find the pair
result = find_pair(nums, target)

# Print the pair
print(result[0])
print(result[1])
```