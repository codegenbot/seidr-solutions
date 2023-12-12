```python
def luhn(vec):
    new_digits = []
    for i in range(len(vec)):
        if i % 2 == 1:
            new_digit = vec[i] * 2
            if new_digit > 9:
                new_digit -= 9
            new_digits.append(new_digit)
        else:
            new_digits.append(vec[i])
    return sum(new_digits)

n = int(input())
vec = list(map(int, input().split()))
print(luhn(vec))
```