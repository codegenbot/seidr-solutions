def luhn(card_number):
    card_number = [int(x) for x in str(card_number)[1:-1].split()]
    card_number = list(map(int, card_number))
    double Alternate = lambda x: x * 2 if (i := len(card_number)) % 2 else x
    return sum(subtract_nine(doubleAlternate(i)) for i in card_number)

def subtract_nine(n):
    return n - 9 if n > 9 else n

print(luhn([0,1,2,3,4,5,6,7,8,9,8,7,6,5,4,3]))
print(luhn([9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9]))
print(luhn([0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0]))
print(luhn([5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5]))
print(luhn([4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4]))