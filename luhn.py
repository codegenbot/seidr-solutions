Here is the solution:

def luhn(card_number):
    card_number = [int(x) for x in str(card_number).split()]
    result = sum([x if i % 2 == 0 else int(str(2*x).strip('0')) if int(str(2*x).strip('0')) > 9 else int(str(2*x).strip('0')) - 9 for i, x in enumerate(card_number)])
    return str(result)