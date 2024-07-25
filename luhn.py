Here is the solution:

def luhn(card_number):
    card_number = [int(x) for x in str(card_number)[1:]]
    doubled = [(i*2 if i%2 else i) for i in card_number]
    result = [(10-i)%9 for i in map(sum, zip(*[list(map(int, list(str(i)))) for i in [str(i) for i in doubled]]))]
    return sum(result)