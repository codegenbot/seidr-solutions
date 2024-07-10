def luhn(card_num):
    card_num = list(map(int, [int(x) for x in str(card_num).replace(" ", "")]))
    
    double_cards = [(x * 2) if i % 2 != 0 else (x if x < 5 else (x - 9)) for i, x in enumerate(card_num)]
    
    return sum(double_cards)