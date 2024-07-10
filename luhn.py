def luhn(card_num):
    card_num = list(map(int, str(card_num).replace(" ", "").strip().split()))
    double_cards = [(x * 2) if i % 2 != 0 else x for i, x in enumerate(card_num)]
    
    return sum([int(x) - 9 if int(x) > 9 else int(x) for x in map(str, double_cards)])