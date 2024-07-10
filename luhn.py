def luhn(card_number):
    card_number = [int(x) for x in str(card_number)[1:]]
    result = sum([i*2 if i % 2 == 0 else i for i in card_number]) - sum([int(str(i).zfill(2)[:1])*9 + int(str(i).zfill(2)[1:]) for i in [x for x in card_number if (x*2) > 9])
    return result