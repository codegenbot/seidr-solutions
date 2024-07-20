def luhn(card_number):
    card_number = list(map(int, card_number.split()))
    double_every_other_digit = lambda x: 2 * x if len(str(x)) > 1 else x
    sum_of_digits = sum(
        double_every_other_digit(d) if i % 2 != 0 else d
        for i, d in enumerate(card_number)
    )
    return sum(
        map(
            lambda x: int(str(x)[:-1]) + 9 - int(str(x)[-1]) if x > 9 else x,
            (sum_of_digits // 10,) * 4,
        )
    )