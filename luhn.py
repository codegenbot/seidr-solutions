def luhn(card):
    card = [int(x) for x in str(card)]
    result = sum(
        [
            (
                x
                if i % 2 == 0
                else (
                    int(x * 2) // 10 + int(x * 2) % 10 if int(x * 2) > 9 else int(x * 2)
                )
            )
            for i, x in enumerate(reversed(card))
        ]
    )
    return str(result)