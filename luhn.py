def luhn(card_num):
    card_num = list(map(int, str(card_num)[1:]))
    result = sum(
        2 * int(digit) if i % 2 else int(digit) for i, digit in enumerate(card_num)
    )
    return (result // 10) + ((result % 10) + 9) % 10