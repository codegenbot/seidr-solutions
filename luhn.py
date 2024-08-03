def luhn(card_number):
    card_number = [int(x) for x in str(card_number)]
    result = sum([i * 2 if i % 2 else i for i in card_number]) - sum(
        [
            int(str(i * 2).zfill(2)[1:])
            for i in card_number[1::2]
            if int(str(i * 2).zfill(2)[0]) > 4
        ]
    )
    return str(result)