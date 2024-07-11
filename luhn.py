```
def luhn(card_number):
    card_number = [int(x) for x in str(card_number)]
    card_number = card_number[::-1]
    for i in range(len(card_number)):
        if i % 2 == 0:
            temp = card_number[i] * 2
            if temp > 9:
                card_number[i] = temp - 9
        else:
            card_number[i] *= 2
            if card_number[i] > 9:
                card_number[i] -= 9
    return sum(card_number)