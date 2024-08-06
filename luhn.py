def luhn(card_number):
    card_number = [int(x) for x in str(card_number)[1:]]
    sum = 0
    for i, num in enumerate(reversed(card_number)):
        if i % 2 == 0:
            sum += num
        else:
            doubled_num = num * 2
            if doubled_num > 9:
                doubled_num -= 9
            sum += doubled_num
    return str(sum)