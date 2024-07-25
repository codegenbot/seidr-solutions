Here is the solution:

def luhn(card_number):
    card_number = list(map(int, str(card_number)[1:]))
    total = 0
    for i in range(0, len(card_number)):
        if i % 2 == 1:
            card_number[i] *= 2
            if card_number[i] > 9:
                card_number[i] -= 9
        total += card_number[i]
    return str(total)