def luhn(card_number):
    card_number = [int(x) for x in str(card_number)]
    result = sum([i * 2 if i % 2 else i for i in card_number[:-1]]) + card_number[-1]

    while result > 9:
        result = sum([int(digit) for digit in str(result)]) - (result // 9) * 9

    return str(result)