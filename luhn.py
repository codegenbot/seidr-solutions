def luhn(card_number):
    card_number = list(map(int, card_number.split()))
    doubled = [i * 2 if i % 2 == 0 else i for i in card_number]
    return sum([int(i) // 10 + int(i) % 10 for i in map(str, doubled)])


print(luhn("0 1 2 3 4 5 6 7 8 9 8 7 6 5 4 3"))
print(luhn("9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9"))
print(luhn("0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0"))
print(luhn("5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5"))
print(luhn("4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4"))