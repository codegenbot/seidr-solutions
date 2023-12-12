```python
def basement(arr):
    sum_so_far = arr[0]
    for i, num in enumerate(arr[1:]):
        sum_so_far += num
        if sum_so_far < 0:
            return i + 1
    return -1

arr = list(map(int, input().split()))

result = basement(arr)
print(result)
```