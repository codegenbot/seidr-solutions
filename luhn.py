def luhn(card_num):
    card_num = [int(x) for x in card_num.split()]
    total_sum = 0
    for i, num in enumerate(card_num[::-1]):
        if i % 2 == 0:
            total_sum += num
        else:
            doubled_num = num * 2
            if doubled_num > 9:
                doubled_num -= 9
            total_sum += doubled_num
    return str(total_sum)