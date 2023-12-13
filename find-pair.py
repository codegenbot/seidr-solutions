```python
def find_pair(n, nums, target):
    nums_set = set(nums)
    for num in nums:
        complement = target - num
        if complement in nums_set:
            return num, complement

n = int(input())
nums = list(map(int, input().split()))
target = int(input())

result = find_pair(n, nums, target)
print(result[0])
print(result[1])
```