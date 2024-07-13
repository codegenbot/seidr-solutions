def luhn(card):
    sum = 0
    for i in range(len(card) - 1, -1, -1):
        if i % 2 == 0:
            digit = int(card[i]) * 2
            if digit > 9:
                digit -= 9
        else:
            digit = int(card[i])
        sum += digit
    return sum