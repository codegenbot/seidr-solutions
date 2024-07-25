def digits(n):
    count_even_digits = 0
    for digit in str(n):
        if int(digit) % 2 == 0:
            count_even_digits += 1
    return "No even digits found" if count_even_digits == 0 else str(count_even_digits)

print(digits(12345))