Here is the solution:

def luhn(card_number):
    card_number = [int(x) for x in card_number.split()]
    doubled = [i*2 if i%2 else i for i in card_number]
    summed = [(d-9) if d>9 else d for d in doubled]
    return sum(summed)