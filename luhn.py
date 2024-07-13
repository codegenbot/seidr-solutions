def luhn(card_number: str):
    card = [int(x) for x in card_number.replace(" ", "")]
    if len(card) != 16:
        return
    card = card[::-1]
    total = 0
    for i, digit in enumerate(card):
        if i % 2 == 0:
            total += digit
        else:
            total += (digit * 2) % 10 + (digit * 2) // 10
    return -1 if total % 10 != 0 else 1