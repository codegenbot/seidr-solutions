Here is the solution:

def luhn(card_number):
    card_number = [int(i) for i in card_number.split()]
    result = sum([2 * int(digit) // 10 + int(digit) % 10 if i % 2 else int(digit) for i, digit in enumerate(card_number)])
    return str(result)