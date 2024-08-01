def luhn(card_num):
    card_num = [int(x) for x in str(card_num)[1:]]
    result = sum([i * 2 if i % 2 != 0 else i for i in card_num]) - sum(
        [
            int(str(i).zfill(2)[:1]) * 2 + int(str(i).zfill(2)[1:])
            for i in [i * 2 if i % 2 != 0 else i for i in card_num]
            if int(str(i).zfill(2)[:1]) * 2 > 9
        ]
    )
    return result