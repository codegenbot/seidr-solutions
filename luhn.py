def luhn():
    card = [int(x) for x in str(input()).replace(" ", "") if isinstance(int(str(x)), int)]
    if len(card) < 15:
        return sum(card)
    card += [0] * (16 - len(card))
    
    new_card = []
    for i, num in enumerate(card):
        temp = num * 2 if i % 2 == 0 else num
        new_card.append((temp // 10) + ((temp % 10) if temp < 10 else 9))

    return sum(new_card)