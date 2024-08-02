def luhn(card_number):
    card_number = list(map(int, card_number[1:]))
    doubled = [i * 2 if i % 2 == 0 else i for i in card_number]
    return sum([int(i) // 10 + int(i) % 10 for i in map(str, doubled)])


card_number = input().split()
print(luhn(card_number))