def luhn(card_number):
    card_number = [int(x) for x in str(card_number)[1:-1].split()]
    new_sum = 0
    for i, num in enumerate(card_number):
        if i % 2 == 0:
            new_sum += num
        else:
            doubled_num = num * 2
            if doubled_num > 9:
                new_sum += doubled_num - 9
            else:
                new_sum += doubled_num
    return str(new_sum)