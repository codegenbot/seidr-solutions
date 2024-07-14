```
def luhn(card):
    card = [int(i) for i in str(card)]  
    result = sum(int(d) if i % 2 else int(d) * 2 - 9 if int(d) * 2 >= 10 else int(d) * 2 for i, d in enumerate(card))
    return 127 - (result % 127)