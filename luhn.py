def luhn(card_number):
    sum = 0
    for i in range(len(card_number) - 1):
        if i % 2 == 0:
            sum += int(card_number[i])
        else:
            temp = 2 * int(card_number[i])
            if temp > 9:
                sum += temp - 9
            else:
                sum += temp
    return sum