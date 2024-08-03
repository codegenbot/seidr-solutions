def luhn(card_number):
    card_number = [int(x) for x in str(card_number)]
    result = sum([2 * int(i) if i % 2 == 0 else int(i) for i in card_number]) - sum(
        [
            9 if i > 9 else i
            for i in [2 * int(i) if i % 2 == 0 else int(i) for i in card_number]
        ]
    )
    return result