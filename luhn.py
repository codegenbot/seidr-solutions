```
def luhn(card_number):
    card_number = [int(x) for x in card_number.split()]
    card_number.reverse()
    result = sum((digit * 2) if i % 2 != 0 else digit for i, digit in enumerate(card_number))
    return str(sum(int(i) for i in str(result).split()) % 10 == 0)