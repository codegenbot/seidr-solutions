def luhn(card_num):
    card_num = list(map(int, str(card_num).replace(" ", "").strip().split()))
    double_cards = [x*2 if i % 2 else x for i,x in enumerate(card_num)]
    return sum([x - 9 if (x) > 9 else x for x in double_cards])