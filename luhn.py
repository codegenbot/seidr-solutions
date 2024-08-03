Here is the solution:

def luhn(card_number):
    card_number = [int(x) for x in str(card_number)]
    result = sum([x if i % 2 == 0 else 2*x if x*10//9 > 4 else 2*x else x*10%9 for i, x in enumerate(card_number)])
    return str(result)