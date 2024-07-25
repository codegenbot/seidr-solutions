```
def digits(n):
    count_even_digits = 0
    for digit in str(n):
        count_even_digits += 1 if int(digit) % 2 == 0 else 0
    return count_even_digits