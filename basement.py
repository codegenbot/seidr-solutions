```python
def basement(arr):
    prefix_sum = 0
    for i in range(len(arr)):
        prefix_sum += arr[i]
        if prefix_sum < 0:
            return i
    return -1


num_cases = int(input())
for _ in range(num_cases):
    num_elements = int(input())
    elements = list(map(int, input().split()))
    result = basement(elements)
    print(result)
```