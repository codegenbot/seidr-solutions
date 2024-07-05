def luhn(card_number):
    card_number = list(map(int, str(card_number)))
    doubled_sum = sum([i * 2 if i % 2 else i for i in card_number])
    return (doubled_sum - ((doubled_sum // 10) * 9)) % 10