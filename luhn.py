def luhn(card_num):
    card_num = list(map(int, [int(x) for x in str(card_num).replace(" ", "")]))
    
    double_cards = [(x * 2) if i % 2 != 0 else (x * 2) if x % 2 == 0 and x > 5 else x for i, x in enumerate(card_num)]
    
    return sum([int(x) - 9 if int(x) > 9 else int(x) for x in map(str, double_cards)])