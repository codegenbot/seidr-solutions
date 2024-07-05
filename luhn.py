```
def luhn(card_number):
    card_number = [int(x) for x in str(card_number)]
    result = 0
    for i, num in enumerate(reversed(card_number)):
        if (i % 2 == 1 and num * 2 > 9):
            result += (num * 2) - 9
        else:
            result += num
    return result