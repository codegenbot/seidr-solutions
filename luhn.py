def luhn(card):
    card = [int(i) for i in str(card)] 
    result = sum([x if i % 2 == 0 else x * 2 - (x * 2 // 10) if x * 2 >= 10 else x * 2 for i, x in enumerate(card)])
    return str(result)