def luhn(card_number):
    card = list(map(int, input().split()))
    result = sum(
        (card[i] * 2) % 10 + (card[i] // 10) if i % 2 else card[i]
        for i in range(len(card))
    )
    return str(result)