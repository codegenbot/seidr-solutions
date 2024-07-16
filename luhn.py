```Python
def luhn(card_number):
    card_number = [int(x) for x in str(card_number)]
    card_number.reverse()
    result = 0
    for i, val in enumerate(card_number):
        if (i % 2 == 1 and val * 2 > 9):
            result += val * 2 - 9
        elif i % 2 == 1:
            result += val
        else:
            result += val
    return result