def luhn(card_number):
    card_number = [int(x) for x in str(card_number)]
    result = []
    for i, d in enumerate(card_number[::-1]):
        if i % 2 == 0:
            result.append(d * 2 if d * 2 > 9 else d * 2 - 9)
        else:
            result.append(d)
    return sum(result) % 10