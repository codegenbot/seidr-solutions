```python
def fuel_cost(arr):
    return sum((num // 3) - 2 for num in arr)

# Read the input vector from the user
arr = list(map(int, input().split()))

# Calculate and print the fuel cost
print(fuel_cost(arr))
```