```
def luhn(card_number):
    card_number = [int(x) for x in card_number]
    result = sum([i * 2 if i % 2 == 0 else i for i in card_number[1:]] + [card_number[0] // 10**((len(str(card_number[0]))) - 1)])
    return str(result)