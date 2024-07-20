```
def luhn(card):
    card = list(map(int, ''.join(filter(str.isdigit, str(card).replace(" ", ""))).replace('0', ''))) 
    card += [0] * (16 - len(card))  
    for i in range(len(card)-1, 0, -1):
        if card[i-1] * 2 > 9:
            card[i-1] = (card[i-1] * 2) % 10 + ((card[i-1] * 2) // 10)
        else:
            card[i-1] *= 2
    return sum(card)