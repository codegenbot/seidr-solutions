def luhn(card_number):
    card_number = [int(x) for x in str(card_number)]

    double_even = [2 * i if i % 2 else i for i in card_number]

    result = sum([x // 10 + (x % 10) for x in double_even])

    return result