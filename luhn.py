def luhn(card):
    card = [int(x) for x in str(card)]
    checksum = sum([i * 2 if i % 2 != 0 else i for i in card]) - sum(
        [
            9 if x > 9 else x
            for x in [
                i // 10 + i % 10 for i in [i * 2 if i % 2 != 0 else i for i in card]
            ]
        ]
    )
    return checksum