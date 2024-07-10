def luhn(card_num):
    card_num = [int(i) for i in str(card_num).replace(" ", "").strip()]
    
    return sum([i if i * 2 < 10 else i - 9 if (i * 2) % 10 != 0 else i - 9 for i in card_num][::(1 if i % 2 == 0 else 0) for i in range(len(card_num))])