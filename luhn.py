def luhn(card_number):
    card_number = [int(x) for x in str(card_number)]
    total_sum = 0
    for i, num in enumerate(reversed(card_number)):
        if i % 2 == 1:
            doubled_num = num * 2
            if doubled_num > 9:
                doubled_num -= 9
            total_sum += doubled_num
        else:
            total_sum += num
    return total_sum