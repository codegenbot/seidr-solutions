```
def luhn(card_number):
    card_number = [int(x) for x in str(card_number)]
    result = sum(sum(divmod(digit*2,10)) if i%2 else digit for i,digit in enumerate(card_number))
    return result