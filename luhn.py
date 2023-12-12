```python
def luhn_algorithm(digits):
    digits = list(map(int, digits))
    for i in range(len(digits) - 2, -1, -2):
        digits[i] *= 2
        if digits[i] > 9:
            digits[i] -= 9
    return sum(digits)

# Read input from user
n = int(input())
digits = list(map(int, input().split()))

# Call the luhn_algorithm function
result = luhn_algorithm(digits)

# Print the result
print(result)
```