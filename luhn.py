def luhn(card_num):
    card_num = [int(x) for x in card_num.split()]
    result = sum([num if i % 2 == 0 else num*2 > 9 and num*2-9 else num*2 for i, num in enumerate(card_num)])
    return str(result)