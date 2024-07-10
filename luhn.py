```
def luhn(card_number):
    card_number = [int(x) for x in str(card_number)]
    result = sum(d if i % 2 == 0 else d*2 % 10 if d * 2 > 9 else d*2 for i, d in enumerate(card_number))
    return (result % 10)