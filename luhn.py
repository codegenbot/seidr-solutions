Here is the solution:

def luhn(card):
    total = 0
    for i in range(len(card) - 1):
        digit = int(card[i])
        if (i % 2 == 0):
            digit *= 2
            if digit > 9:
                digit -= 9
        total += digit
    return str(total)