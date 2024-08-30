Here is the solution:

def luhn(card_number):
    card_number = [int(x) for x in str(card_number)[1:]]
    card_number = card_number[::-1]
    double_every_other = [(x*2) if i%2 != 0 else x for i, x in enumerate(card_number)]
    return sum([int(x) if int(x) > 9 else int(x) for x in map(str, [x-9 if x > 9 else x for x in double_every_other])])

print(luhn(16))
print(luhn((0,1,2,3,4,5,6,7,8,9,8,7,6,5,4,3)))
print(luhn((9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9)))
print(luhn(0))
print(luhn((5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5)))
print(luhn((4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4)))