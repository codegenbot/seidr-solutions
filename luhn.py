def luhn(card_number):
    card_number = [int(i) for i in str(card_number)]
    total = sum(
        [
            (
                card_number[i]
                if i % 2 == 0
                else (
                    2 * card_number[i]
                    if 2 * card_number[i] <= 9
                    else 2 * card_number[i] - 9
                )
            )
            for i in range(len(card_number))
        ]
    )
    return total