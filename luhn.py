def luhn(card_number):
    card_number = [int(x) for x in str(card_number)[1:-1].split()]
    result = sum(
        2 * int(digit) if i % 2 != 0 else int(digit)
        for i, digit in enumerate(reversed(card_number))
    )
    return "Even" if (result - (result // 10) * 9) % 10 == 0 else "Odd"