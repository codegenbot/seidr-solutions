def luhn(card_number):
    card_number = list(map(int, card_number))
    double_every_other = [
        card_number[i] * 2 if i % 2 != 0 else card_number[i]
        for i in range(len(card_number))
    ]
    sum_of_digits = sum(
        [digit - 9 if digit > 9 else digit for digit in double_every_other]
    )
    return str(sum_of_digits)