```python
def find_pair(nums, target):
    complements = {}
    for num in nums:
        complement = target - num
        if complement in complements:
            return complement, num
        complements[num] = True

# Read input from user
n = int(input())
nums = list(map(int, input().split()))
target = int(input())

# Find pair and print output
pair = find_pair(nums, target)
print(*pair)
```