def luhn(card_number):
    card_number = [int(x) for x in str(card_number)] 
    result = 0
    for i, num in enumerate(reversed(card_number)):
        if (i % 2 == 1): 
            doubled_num = num * 2
            if doubled_num > 9: 
                result += doubled_num - 9
            else: 
                result += doubled_num
        else:
            result += num
    return result