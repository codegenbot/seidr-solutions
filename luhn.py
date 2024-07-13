```
def luhn(card):
    card = list(map(int, str(card).replace(" ", "")))
    return sum((digit*2 if i%2 else digit) - 9 if (digit*2)//10 > 0 else digit for i, digit in enumerate(card)) % 10