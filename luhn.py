def luhn():
    card = [int(x) for x in str(input().replace(" ", "")).split() if isinstance(int(x), int)]
    if len(card) < 15:
        return sum(card)
    while len(card) < 16:
        card.append(0)
    for i in range(len(card)-1, 0, -2):
        temp = card[i] * 2
        card[i] = (temp // 10) + (temp % 10) if temp > 9 else temp
    return sum(card)