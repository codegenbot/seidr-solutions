```
def luhn(card_number):
    card_number = [int(x) for x in str(card_number)]
    result = sum(int(d) if i % 2 else int(d) * 2 if int(d) * 2 >= 10 else int(d) * 2 - 9 for i, d in enumerate(card_number))
    return result % 10