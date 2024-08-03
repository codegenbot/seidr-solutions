def luhn(card_number):
    card_number = [int(x) for x in str(card_number)]
    result = sum(
        [
            (
                x
                if i % 2 == 0
                else (
                    int(str(2 * x).zfill(2))[-1] - 9
                    if int(str(2 * x).zfill(2))[-1] > 4
                    else int(str(2 * x).zfill(2))[-1]
                )
            )
            for i, x in enumerate(card_number)
        ]
    )
    return result