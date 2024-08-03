Here is the completed code:

def luhn(card):
    card = [int(x) for x in card.split()]
    total = 0
    for i in range(1, len(card), 2):
        doubled = card[i] * 2
        if doubled > 9:
            doubled -= 9
        total += doubled
    for i in range(0, len(card), 2):
        total += card[i]
    return total