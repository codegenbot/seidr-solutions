def luhn(card):
    card = list(map(int, card.split()))
    result = sum(2 * int(i) if i % 2 else int(i) for i in card[:-1]) - sum(
        (2 * int(i)) // 10 + (2 * int(i)) % 10 for i in card[1::2] if (2 * int(i)) > 9
    )
    result += card[-1]
    return str(result)