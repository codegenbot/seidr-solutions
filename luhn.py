Here is the solution:

def luhn(card):
    card = list(map(int, card.split()))
    result = sum([x if i % 2 == 0 else x*2 if x*2 > 9 else x*2 - 9 for i, x in enumerate(card)])
    return str(result)