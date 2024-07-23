def luhn(card_num):
    card_num = [int(x) for x in card_num.split()]
    result = sum(
        [x if i % 2 == 0 else x * 2 - ((x * 2) > 9) * 9 for i, x in enumerate(card_num)]
    )
    return str(result)