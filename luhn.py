def luhn(card_number):
    card_number = list(map(int, card_number[1:]))
    doubled = [i * 2 if i % 2 != 0 else i for i in card_number]
    summed = [(i - 9) if i > 9 else i for i in doubled]
    return sum(summed)