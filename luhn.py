def luhn_sum(card):
    return (
        sum(2 * int(x) if i % 2 else int(x) for i, x in enumerate(card))
        - sum(
            int(x) // 10 + int(x) % 10
            for x in (
                str(2 * int(x)) if i % 2 else str(int(x)) for i, x in enumerate(card)
            )
        )
        if len(card) == 16
        else None
    )