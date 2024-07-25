Here is the solution:

def luhn(card):
    card = [int(x) for x in card.split()]
    result = sum([2 * int(i) if i % 2 else int(i) for i in card]) - sum([9 if i > 9 else i for i in [2 * int(i) if i % 2 else int(i) for i in card]])
    return str(result)