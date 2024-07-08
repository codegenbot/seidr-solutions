def luhn(card_number):
    card_number = [int(x) for x in str(card_number)]
    checksum = sum(2*c if i % 2 else c for i, c in enumerate(card_number))
    return (checksum // 10 + 1) % 10