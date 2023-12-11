```python
def find_pair(arr, target):
    seen = set()
    for num in arr:
        complement = target - num
        if complement in seen:
            return num, complement
        seen.add(num)

# Read input from user
n = int(input())
arr = list(map(int, input().split()))
target = int(input())

# Call the function and print the output
result = find_pair(arr, target)
print(*result)
```