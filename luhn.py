def luhn(card):
    card = [int(x) for x in card[1:]]
    doubled_sum = sum([2 * x if i % 2 else x for i, x in enumerate(card)])
    return (doubled_sum - ((doubled_sum // 10 + 1) % 10)) * 9