def luhn(card):
    total = 0
    for i in range(len(card)):
        if i % 2 == 1:
            card[i] = str(int(card[i]) * 2)
            if len(card[i]) > 1:
                card[i] = str((int(card[i][0]) + int(card[i][1])) % 10)
        total += int(card[i])
    return total