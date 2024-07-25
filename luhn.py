def luhn(card_number):
    card_number = list(map(int, card_number))
    odd_sum = sum([num * 2 if i % 2 != 0 else num for i, num in enumerate(card_number)])
    return (odd_sum // 9) * 9 + sum(
        [num for i, num in enumerate(card_number) if i % 2 == 0]
    )