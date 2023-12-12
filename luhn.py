```python
def luhn_algorithm(digits):
    new_digits = []
    for i, digit in enumerate(digits):
        if i % 2 == 1:
            double_digit = int(digit) * 2
            if double_digit > 9:
                new_digits.append(double_digit - 9)
            else:
                new_digits.append(double_digit)
        else:
            new_digits.append(int(digit))
    return sum(new_digits)

# Read input from user
n = int(input())
digits = input().split()

# Call the function and print the result
print(luhn_algorithm(digits))
```