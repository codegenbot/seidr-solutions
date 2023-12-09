To solve the problem, modify the code as follows:

```python
def basement(arr):
    total_sum = 0
    for i in range(len(arr)):
        total_sum += arr[i]
        if total_sum < 0:
            return i
    return -1

n = int(input())
arr = [int(input()) for _ in range(n)]

result = basement(arr)
print(result)
```