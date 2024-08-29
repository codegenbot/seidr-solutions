Here is the completed code:

def luhn(card_number):
    sum = 0
    for i in range(len(card_number)):
        if i % 2 == 1:
            card_number[i] = str(int(card_number[i]) * 2)
            if len(card_number[i]) > 1:
                card_number[i] = str(int(card_number[i]) - 9)
        sum += int(card_number[i])
    return sum