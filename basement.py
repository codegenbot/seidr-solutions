```python
def basement(arr):
    sum_so_far = 0
    for i, num in enumerate(arr):
        sum_so_far += num
        if sum_so_far < 0:
            return i
    return -1

n = int(input())
arr = [int(input()) for _ in range(n)]
result = basement(arr)
print(result)
```