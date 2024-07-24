def luhn(card_number):
    card_number = [int(x) for x in card_number]
    result = sum(2 * i if (i*2) > 9 else i * 2 // 10 + i % 10 for i in card_number[1::2]) + sum(i for i in card_number[0::2])
    return str(result)