def luhn(card_number):
    card_number = list(map(int, card_number.replace(" ", "").split()))
    total = 0
    for i in range(len(card_number)):
        if (i % 2) == 1:
            digit = card_number[i] * 2
            if digit > 9:
                digit -= 9
            total += digit
        else:
            total += card_number[i]
    return total