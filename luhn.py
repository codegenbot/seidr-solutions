def luhn(card_number):
    card_number = list(map(int, card_number.split()))
    result = sum(
        [
            i if i < 5 else i - 9
            for i in [x * 2 if i % 2 != 0 else x for x in card_number]
        ]
    )
    return str(result)