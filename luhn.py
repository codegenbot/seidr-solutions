Here is the solution:

def luhn(card):
    card = list(map(int, str(card)))
    double_even = False
    total = 0
    for i in range(len(card) - 1, -1, -1):
        if double_even:
            card[i] *= 2
            if card[i] > 9:
                card[i] -= 9
        double_even = not double_even
        total += card[i]
    return total