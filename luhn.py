def luhn_check(card_number):
    card_number = list(map(int, str(card_number)))
    doubled = [i * 2 if i % 2 else i for i in card_number]
    return sum([int(i) // 10 + int(i) % 10 for i in map(str, doubled)])


card_number = int(input())
print(luhn_check(card_number))