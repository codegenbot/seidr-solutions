```
def luhn(card_number):
    card_number = list(map(int, str(card_number)))
    return _luhn(card_number)

def _luhn(card_number):
    if len(card_number) == 1:
        return sum(card_number)
    else:
        digit = card_number.pop(0)
        if len(card_number) % 2 == 1:
            digit *= 2
            if digit > 9:
                digit -= 9
        return _luhn(card_number) + digit