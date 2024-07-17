Here is the solution:

def luhn(card_number):
    card_number = [int(x) for x in str(card_number)[1:]]
    result = sum([x*2 if i%2 != 0 else x for i,x in enumerate(card_number)])
    return str(result).zfill(3)[-1]