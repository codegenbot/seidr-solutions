```python
def find_pair(nums, target):
    complements = {}
    for num in nums:
        complement = target - num
        if complement in complements:
            return complement, num
        complements[num] = True

n = int(input())
nums = list(map(int, input().split()))
target = int(input())

pair = find_pair(nums, target)
print(pair[0])
print(pair[1])
```