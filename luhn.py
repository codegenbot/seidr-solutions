```
def luhn(card_number):
    card_number = [int(x) for x in str(card_number)]
    card_number = card_number[::-1]  
    result = sum(sum(divmod(digit * 2, 10)) if i % 2 else digit for i, digit in enumerate(card_number))
    return 9 - (result % 10) if result > 9 else result