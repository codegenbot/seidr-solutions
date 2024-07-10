```
def luhn(card_number):
    card_number = [int(x) for x in str(card_number)]
    return sum((d * 2 - 9) if d * 2 >= 9 else d for d in card_number[1:] + [card_number[0]]) % 10