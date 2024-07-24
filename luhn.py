def luhn(card):
    card = list(map(int, [int(x) for x in card.replace(' ', '')]))
    check_sum = sum([card[i] if i % 2 else 2 * card[i] if 2 * card[i] < 10 else 2 * card[i] - 9 for i in range(len(card))])
    return 0 if (check_sum % 10) == 0 else 1