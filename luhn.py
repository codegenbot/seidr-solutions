def luhn(card_number):
    card_number = [int(x) for x in str(card_number)]
    odd_sum = 0
    even_sum = 0
    for i in range(len(card_number)):
        if i % 2 == 0:
            even_sum += card_number[i]
        else:
            temp = card_number[i] * 2
            if temp > 9:
                temp -= 9
            odd_sum += temp
    return odd_sum + even_sum