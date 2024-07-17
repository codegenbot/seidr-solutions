Here is the solution:

def luhn(card_number):
    card_number = [int(x) for x in str(card_number).split()]
    result = sum(2 * int(digit) if i % 2 else int(digit) for i, digit in enumerate(card_number))
    return result - ((result // 10 + 1) * (result % 10))