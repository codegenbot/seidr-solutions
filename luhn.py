def luhn(card):
    card = [int(x) for x in str(card)]
    result = sum([i * 2 if i % 2 else i for i in card]) - sum(
        [
            x // 10 + x % 10 if x > 9 else x
            for x in [i * 2 if i % 2 else i for i in card]
        ]
    )
    return result