```python
def find_pair(nums, target):
    num_set = set()
    for num in nums:
        complement = target - num
        if complement in num_set:
            return num, complement
        num_set.add(num)

n = int(input())
nums = list(map(int, input().split()))
target = int(input())

result = find_pair(nums, target)
print(result[0])
print(result[1])
```