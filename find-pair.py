```python
def find_pair(nums, target):
    num_set = set()
    for num in nums:
        complement = target - num
        if complement in num_set:
            return complement, num
        num_set.add(num)

# Read input from user
n = int(input())
nums = list(map(int, input().split()))
target = int(input())

# Find the pair and print the output
pair = find_pair(nums, target)
print(*pair, sep="\n")
```