def luhn(card_number):
    card_number = list(map(int, str(card_number)))
    sum_check = 0
    for i in range(0, len(card_number)):
        if (i % 2) == 1:
            temp = card_number[i] * 2
            if temp > 9:
                temp -= 9
            sum_check += temp
        else:
            sum_check += card_number[i]
    return sum_check