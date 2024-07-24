```
def luhn(card_number):
    card_number = [int(x) for x in card_number]
    result = 0
    for i, digit in enumerate(card_number[::-1]):
        if (i % 2 == 0 and digit * 2 >= 10):
            result += digit * 2 // 10 + digit * 2 % 10
        else:
            result += digit
    return str(result)