def luhn(card_number):
    card_number = [int(x) for x in str(card_number)]
    result = sum(
        (2 * int(digit)) if i % 2 else int(digit) 
        for i, digit in enumerate(card_number)
    )
    return (result - ((result // 9 + 1) // 10 * 9) if result > 9 else result) % 10