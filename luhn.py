```Python
def luhn(card):
    card = [int(x) for x in str(card)[1:-1].split()]
    result = sum(
        sum(digit * 2 if i % 2 == 0 else digit for i, digit in enumerate(card)) - 
        sum((digit * 2 // 10) + (digit * 2) % 10 for i, digit in enumerate(card) if i % 2 == 0)
    )
    return result