def luhn(card_num):
    card_num = [int(x) for x in str(card_num).replace(" ", "")]
    result = sum(
        [
            x if i % 2 == 0 else int(str(x * 2).strip('0')) if str(x * 2).strip('0') != '0' else 9
            for i, x in enumerate(card_num)
        ]
    )
    return result