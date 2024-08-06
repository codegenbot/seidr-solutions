def luhn(card_number):
    card_number = [int(x) for x in str(card_number).split()]
    result = sum(
        [
            2 * int(i) if i != "0" and (index % 2 == 1) else int(i)
            for index, i in enumerate(card_number)
        ]
    )
    return str(result)