def luhn(card_number):
    card_number = [int(x) for x in str(card_number)]
    sum1 = 0
    for i in range(0, len(card_number)):
        if i % 2 == 0:
            sum1 += card_number[i]
        else:
            temp = card_number[i] * 2
            if temp > 9:
                sum1 += temp - 9
            else:
                sum1 += temp
    return str(sum1)