Here is the solution:

def luhn(card):
    card = [int(i) for i in str(card)]
    double_even = False
    result = 0
    for digit in reversed(card):
        if double_even:
            digit *= 2
            if digit > 9:
                digit -= 9
        result += digit
        double_even = not double_even
    return result