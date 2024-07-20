```
def luhn():
    card = [int(x) for x in str(input().replace(" ", ""))]
    if len(card) != 16:
        return sum(card)
    new_card = []
    for i, num in enumerate(card):
        if i % 2 == 0:  
            new_card.append(num)
        else:  
            temp = num * 2
            new_card.append((temp // 10) + ((temp % 10) if temp < 10 else 9))

    return sum(new_card)