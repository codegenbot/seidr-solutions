def luhn(card_num):
    card_num = list(map(int, str(card_num).replace(" ", "").strip().split()))
    double_cards = [(x * 2) % 10 if i % 2 != 0 else x for i, x in enumerate(card_num)]
    
    return sum(double_cards)