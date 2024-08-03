def luhn(card_number):
    card_number = [int(x) for x in str(card_number)]
    doubled_sum = sum(
        sum(divmod(digit * 2, 10))
        for i, digit in enumerate(card_number[1:])
        if i % 2 != 0
    )
    normal_sum = sum(digit for i, digit in enumerate(card_number) if i % 2 == 0)
    return str(normal_sum + doubled_sum)