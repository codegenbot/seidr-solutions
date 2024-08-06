Here is the solution:

def luhn(card):
    card = [int(x) for x in str(card)]
    double_even = False
    sum = 0
    for i, digit in enumerate(reversed(card)):
        if double_even:
            digit *= 2
            if digit > 9:
                digit -= 9
        sum += digit
        double_even = not double_even
    return sum