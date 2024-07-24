def luhn(card_num):
    card_num = [int(x) for x in str(card_num).split()]
    result = sum(
        (
            int(digit)
            if i % 2
            else int(digit) * 2 if int(digit) * 2 > 9 else int(digit) * 2 - 9
        )
        for i, digit in enumerate(card_num)
    )
    return result