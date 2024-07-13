def luhn(card_number):
    card_number = [int(x) for x in str(card_number)]
    card_number = card_number[::-1]  
    sum = 0
    for i in range(len(card_number)):
        if i % 2 == 1:  
            temp_sum = card_number[i] * 2
            if temp_sum > 9:
                temp_sum -= 9
            sum += temp_sum
        else:
            sum += card_number[i]
    return sum