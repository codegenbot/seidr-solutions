def luhn(card_number):
    card_number = [int(x) for x in str(card_number)]
    return sum(int(i) if i * 2 < 10 else int(i * 2) - 9 for i in card_number[1::2]) + sum(i for i in card_number[::2]) % 10