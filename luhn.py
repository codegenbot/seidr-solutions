```
def luhn(card_num):
    card_num = list(map(int, [int(x) for x in str(card_num).replace(" ", "")]))
    
    double_cards = [(x * 2) % 10 if i % 2 != 0 else x for i, x in enumerate(card_num)]
    
    return sum([i if i > 9 else i - 9 for i in double_cards])