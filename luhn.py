def luhn(card): 
    return str(sum((int(i) * 2 if len(card) - card.index(i) > 1 else int(i)) 
                   if (int(i) * 2) % 10 > 4 else (int(i) * 2 // 10)*10 + ((int(i) * 2) % 10)
                   for i in str(card)))