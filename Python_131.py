def digits(n):
    count_even_digits = 0
    for digit in str(n):
        if int(digit) % 2 == 0:
            count_even_digits += 1
    if count_even_digits > 0:
        return "Even"
    else:
        return "Odd"