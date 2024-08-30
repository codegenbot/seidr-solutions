def luhn(card_num):
    card_num = list(map(int, card_num.split()))
    result = sum(
        2 * int(digit) if i % 2 != 0 else int(digit) for i, digit in enumerate(card_num)
    )
    return str(result % 10)