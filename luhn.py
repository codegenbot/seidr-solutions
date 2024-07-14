def luhn(card_number):
    card_number = [int(x) for x in str(card_number)]
    card_number = list(reversed(card_number))
    result = 0
    is_second = True
    for i, num in enumerate(card_number):
        if is_second:
            doubled_num = num * 2
            if doubled_num > 9:
                result += doubled_num - 9
            else:
                result += doubled_num
        else:
            result += num
        is_second = not is_second
    return (result) % 10