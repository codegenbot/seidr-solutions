def luhn(card_number):
    card_number = [int(x) for x in str(card_number).split()]
    result = sum(
        [int(x) * 2 if i % 2 != 0 else int(x) for i, x in enumerate(card_number)]
    )
    return sum([int(x) // 10 + int(x) % 10 for x in str(result)])


card_number = list(map(int, input().split()))
print(luhn(card_number))