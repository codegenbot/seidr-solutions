```
def luhn(card_number):
    card_number = [int(x) for x in str(card_number)]
    total = 0
    for i in range(len(card_number)):
        if i % 2 == 1:
            temp = (card_number[i] * 2) // 10 + ((card_number[i] * 2) % 10)
            if temp > 9:
                total += temp - 9
            else:
                total += temp
        else:
            total += card_number[i]
    return total