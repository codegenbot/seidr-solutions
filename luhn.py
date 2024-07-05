```
def luhn(card_number):
    card_number = [int(d) for d in str(card_number)]
    return sum(sum(divmod(x*2,10)) if i % 2 != 0 else x for i, x in enumerate(card_number))