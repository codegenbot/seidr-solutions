```python
def hex_key(num):
    primes = {'B': '11', 'D': '13'}
    count = 0
    for digit in num.upper():
        if digit.isdigit() or digit in primes:
            if int(digit) > 1 and all(int(digit) % i != 0 for i in range(2, int(digit)**0.5 + 1)):
                count += 1
    return count