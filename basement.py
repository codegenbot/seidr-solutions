```python
def basement(arr):
    prefix_sum = 0
    for i in range(len(arr)):
        prefix_sum += arr[i]
        if prefix_sum < 0:
            return i
    return -1

# Read input from user
n = int(input())
arr = []
for _ in range(n):
    arr.append(int(input()))

# Call the basement function and print the result
result = basement(arr)
print(result)
```
Note: The code assumes that the input is valid and follows the given format.