def luhn(card):
    card = list(map(int, str(card)))
    double_even = False
    total_sum = 0
    for i in range(len(card)):
        if double_even:
            card[i] *= 2
            if card[i] > 9:
                card[i] -= 9
        double_even = not double_even
    return sum(card)