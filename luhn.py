```
def luhn(card_number):
    card_number = [int(x) for x in str(card_number)]
    sum = 0
    for i in range(len(card_number)):
        if i % 2 == 1:
            temp = card_number[i] * 2
            if temp > 9:
                temp -= 9
            sum += temp
        else:
            sum += card_number[i]
    return (sum + 1) % 10