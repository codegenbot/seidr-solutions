def luhn(card):
    card = [int(x) for x in str(card)]
    doubled = [(2 * i) % 10 if i % 2 else i for i in card]
    return sum([9 - i if i > 9 else i for i in doubled])