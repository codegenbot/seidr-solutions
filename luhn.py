```Python
def luhn(card):
    card = [int(i) for i in str(card)]
    if len(card) != 16:
        return 
    result = sum([x if i % 2 == 0 else (x * 2) % 10 + ((x * 2) // 10 >= 1) * 9 for i, x in enumerate(card)])
    if result > 9:
        result -= 9
    return str(result)