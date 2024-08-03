Here is the solution:

def luhn(card_number):
    card_number = [int(x) for x in str(card_number)[1:]]
    result = sum(2 * int(digit) if i % 2 else int(digit) for i, digit in enumerate(card_number))
    return str(result % 10)

print(luhn(int(input("Enter a credit card number (16 digits): "))))