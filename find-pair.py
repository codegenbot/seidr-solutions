```python
def find_pair(nums, target):
    seen = set()
    for num in nums:
        complement = target - num
        if complement in seen:
            return num, complement
        seen.add(num)

# Read input
n = int(input())
nums = list(map(int, input().split()))
target = int(input())

# Find pair
result = find_pair(nums, target)

# Print output
print(*result)
```