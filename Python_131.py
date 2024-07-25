def digits(n):
    count_even_digits = 0
    for digit in str(n):
        if int(digit) % 2 == 0:
            count_even_digits += 1
    return str(count_even_digits) if count_even_digits > 0 else "No even digits found"

print(digits(12345))