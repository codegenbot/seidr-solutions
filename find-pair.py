```python
def find_pair():
    n = int(input())
    nums = list(map(int, input().split()))
    target = int(input())
    
    for i in range(n):
        for j in range(i+1, n):
            if nums[i] + nums[j] == target:
                return nums[i], nums[j]
    
    return None

pair = find_pair()
if pair is not None:
    print(pair[0])
    print(pair[1])
```