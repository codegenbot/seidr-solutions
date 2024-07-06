    digits = [int(digit) for digit in digits]
    sum = 0
    for i, digit in enumerate(digits):
        if i % 2 == 1: # if the index is odd (starting from second digit)
            digit *= 2
        sum += digit
        if sum >= 10:
            sum -= 10
    return sum