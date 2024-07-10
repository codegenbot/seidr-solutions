def luhn(card_number):
    card_number = [int(x) for x in str(card_number)[1:]]
    total_sum = 0
    for i, num in enumerate(card_number):
        if i % 2 == 0:
            total_sum += num
        else:
            doubled_num = num * 2
            if doubled_num > 9:
                total_sum += doubled_num - 9
            else:
                total_sum += doubled_num
    return total_sum