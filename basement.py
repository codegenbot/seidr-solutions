```python
def basement(arr):
    sum_so_far = 0
    for i, num in enumerate(arr):
        sum_so_far += num
        if sum_so_far < 0:
            return i
    return -1

arr = list(map(int, input().split()))
result = basement(arr)
print(result)
```