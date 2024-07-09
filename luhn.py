```
def luhn(card_number):
    card_number = [int(x) for x in str(card_number)]
    total = 0
    is_second = False
    for i in range(len(card_number)-1, -1, -1):
        digit = card_number[i]
        if is_second:
            digit *= 2
            if digit > 9:
                digit -= 9
        total += digit
        is_second = not is_second
    return total % 10