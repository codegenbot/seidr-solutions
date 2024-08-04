Here is the solution:

def luhn(card):
    card = list(map(int, card[2:]))
    sum = 0
    for i in range(1, len(card), 2):
        double = card[i] * 2
        if double > 9:
            double -= 9
        sum += double
    for i in range(len(card)):
        if i % 2 != 0:
            sum += card[i]
    return str(sum)