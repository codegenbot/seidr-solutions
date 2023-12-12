```python
def basement(arr):
    prefix_sum = 0
    for i in range(len(arr)):
        prefix_sum += arr[i]
        if prefix_sum < 0:
            return i
    return -1

arr = list(map(int, input().split()))
print(basement(arr))
```