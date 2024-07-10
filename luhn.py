```
def luhn(card_num):
    card_num = list(map(int, str(card_num).replace(" ", "").strip().split()))
    
    result = sum([x if i % 2 == 0 else x * 2 if x * 2 > 9 else x * 2 - 9 for i, x in enumerate(card_num)])
    
    return result