def luhn(card_number):
    card_number = [int(x) for x in str(card_number)]
    doubled = [i * 2 if i % 2 != 0 else i for i in card_number]
    return sum(
        [x if x > 9 else x for x in map(sum, zip(map(int, str(i)) for i in doubled))]
    )