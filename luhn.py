def luhn(card):
    card = [int(x) for x in str(card)[1:-1].split()]
    total = sum((digit * 2) % 10 + digit if i % 2 else digit for i, digit in enumerate(card))
    return total