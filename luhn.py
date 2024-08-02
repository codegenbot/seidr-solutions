def luhn(card):
    card = list(map(int, card.split()))
    result = sum(
        sum(digit * 2 if i % 2 else digit for digit in card[i : i + 2]) - 9
        for i in range(len(card))
        if (i % 2 and digit > 4) or not i % 2
    )
    return str(result)