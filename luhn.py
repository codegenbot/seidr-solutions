def luhn(card_number):
    card_number = [int(x) for x in str(card_number)]
    card_number.reverse()
    result = sum([2 * int(i) if i % 2 else int(i) for i in card_number])
    return (result // 10) + ((result % 10) == 0)