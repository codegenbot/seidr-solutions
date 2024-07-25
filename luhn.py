def luhn(card_number):
    card_number = [int(x) for x in str(card_number)]
    doubled_sum = sum([2 * x if i % 2 else x for i, x in enumerate(card_number)])
    return (doubled_sum // 10) * 9 + (doubled_sum % 10)