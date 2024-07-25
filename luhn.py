Here is the solution:

def luhn(card_number):
    card_number = [int(x) for x in str(card_number)[1:]]
    result = sum([d*2 if i%2 else d for i,d in enumerate(card_number)])
    return str(result % 10)

print(luhn(int(input("16\n"))))