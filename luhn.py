def luhn(card):
    card = list(map(int, card.split()))
    sum = 0
    for i in range(15, -1, -2):
        temp = card[i] * 2
        if temp > 9:
            sum += temp - 9
        else:
            sum += temp
    return sum