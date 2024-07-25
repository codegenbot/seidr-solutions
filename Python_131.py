```
def digits(n):
    count_even_digits = 0
    for digit in str(n):
        if int(digit) % 2 == 0 and int(digit) != 0:
            count_even_digits += 1
    return "Yes" if count_even_digits > 0 else "No even digits found"


print(digits(12345))