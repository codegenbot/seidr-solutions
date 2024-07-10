Here is the solution in Python:

def luhn(card_number):
    total = 0
    for i, digit in enumerate(reversed(card_number)):
        if (i % 2) == 1:
            digit *= 2
            if digit > 9:
                digit -= 9
        total += int(digit)
    return total