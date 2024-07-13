def luhn(card):
    card = [int(x) for x in str(card)[1:-1].split()]
    return sum(sum(digit*2 if i%2 else digit for i, digit in enumerate(card))) % 10