```
def luhn(card):
    card = [int(x) for x in str(card).split()]
    result = sum(sum(divmod(d * 2, 10)) + d for d in card[::-1]) % 10
    return result if result == 0 else 10 - result