```Python
def luhn(card_num):
    card_num = [int(x) for x in str(card_num).replace(" ", "").split()]
    
    return sum([x if i % 2 == 0 else ((x * 10) + int(str(x)[1])) - 9 if ((x * 10) + int(str(x)[1])) > 9 else ((x * 10) + int(str(x)[1])) for i, x in enumerate(card_num)])