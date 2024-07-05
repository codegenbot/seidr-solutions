def luhn(card_number):
    card_number = list(map(int, str(card_number)))
    result = sum([
        i if i % 2 else (i * 2) // 10 + (i % 10)
        if (i * 2) > 9
        else (i * 2)
        for i in card_number
    ])
    return (result - ((result // 10) * 9)) % 10