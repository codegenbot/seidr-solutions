```
def luhn(card_number):
    card_number = [int(x) for x in str(card_number)]
    return (sum((d*2 >= 10).sum() + sum(int(d))) % 10 if len(card_number)%2 else None)