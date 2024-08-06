def luhn_sum(card):
    card = list(map(int, card.split()))
    total = 0
    for i, x in enumerate(reversed(card)):
        if i % 2 == 1:
            x *= 2
            if x > 9:
                x -= 9
        total += x
    return total