```
def luhn(card_number):
    card_number = [int(x) for x in str(card_number)]
    sum = 0
    for i in range(0, len(card_number)):
        if i % 2 == 1:
            double_card_number = card_number[i] * 2
            if double_card_number > 9:
                double_card_number -= 9
            sum += double_card_number
        else:
            sum += card_number[i]
    return sum