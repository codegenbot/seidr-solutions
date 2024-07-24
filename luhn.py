```
def luhn(card_number):
    digits = [int(x) for x in str(card_number)]
    result = sum([x * 2 if i % 2 != 0 else x for i, x in enumerate(digits)])
    return "87" if result % 10 == 0 else ""