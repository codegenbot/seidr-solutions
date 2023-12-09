```python
def basement(arr):
    s = 0
    for i in range(len(arr)):
        s += arr[i]
        if s < 0:
            return i
    return -1

n = int(input())
arr = [int(input()) for _ in range(n)]

result = basement(arr)
print(result)
```