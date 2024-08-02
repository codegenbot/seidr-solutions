def luhn(card_number):
    card_number = [int(x) for x in card_number[2:]]
    doubled_sum = sum([x * 2 if i % 2 != 0 else x for i, x in enumerate(card_number)])
    return str(sum([x // 10 + x % 10 for x in map(int, str(doubled_sum))]))