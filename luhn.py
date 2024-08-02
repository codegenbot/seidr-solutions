def luhn(card_number):
    card_number = [int(x) for x in str(card_number)[1:-1].split()]
    result = sum([d * 2 if i % 2 != 0 else d for i, d in enumerate(card_number)]).sum()
    return (result // 9) * 9