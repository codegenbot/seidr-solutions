def luhn(card_number):
    card_number = [int(x) for x in str(card_number)]
    result = sum(
        [
            (
                card_number[i]
                if i % 2 == 0
                else (
                    2 * card_number[i]
                    if 2 * card_number[i] >= 10
                    else 2 * card_number[i]
                )
            )
            for i in range(len(card_number))
        ]
    )
    return result