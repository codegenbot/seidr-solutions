def luhn(card):
    card = [int(x) for x in card[1:]]
    doubled_sum = sum([2 * int(i) if i % 2 else int(i) for i in card])
    return (doubled_sum - ((doubled_sum // 10 + doubled_sum % 10) % 10)) % 10