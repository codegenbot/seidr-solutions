def luhn(card_num):
    card_num = [int(x) for x in str(card_num).replace(" ", "").strip()]
    double_cards = [(x * 2) if i % 2 != 0 else x for i, x in enumerate(card_num)]
    return sum([x - 9 if (x) > 9 else x for x in double_cards])