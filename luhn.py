def luhn(card):
    card = [int(x) for x in card.split()]
    double_even = [(2 * d) if i % 2 == 0 else d for i, d in enumerate(card)]
    return sum([int(d) // 10 + int(d) % 10 for d in double_even])


card_input = input()
print(luhn(card_input))