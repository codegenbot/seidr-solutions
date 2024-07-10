Here is the solution:

def luhn(card):
    card = [int(x) for x in str(card)]
    result = sum(sum(divmod(d*2,10))+d for d in card[::-1]) if len(card) == 16 else 0
    return result