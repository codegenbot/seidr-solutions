```
def luhn(card_number):
    card_number = [int(x) for x in str(card_number)]
    card_number = card_number[::-1]

    result = 0
    for i, num in enumerate(card_number):
        if (i % 2 == 0 and num * 2 >= 10):
            card_number[i] -= 9
        else:
            card_number[i] *= 2

    return sum(card_number)