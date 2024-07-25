```
def digits(n):
    count_odd_digits = 0
    for digit in str(n):
        if int(digit) % 2 != 0:
            count_odd_digits += 1
    return count_odd_digits
print(digits(12345))