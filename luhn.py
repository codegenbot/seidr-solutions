```
def luhn(card_number):
    card_number = [int(x) for x in card_number]
    result = sum([i * 2 if i % 2 == 0 else i for i in card_number[1:]] + [card_number[0]])
    return str(result)