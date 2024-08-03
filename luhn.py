def luhn(card_num):
    card_num = [int(x) for x in str(card_num)]
    result = sum(
        2 * int(digit) if i % 2 != 0 else int(digit) for i, digit in enumerate(card_num)
    )
    return (result - ((result // 10 + 1) % 10)) * 9