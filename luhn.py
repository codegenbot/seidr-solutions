```
def luhn(card_number):
    card_number = [int(x) for x in str(card_number)]
    total_sum = 0
    for i, num in enumerate(reversed(card_number)):
        if i % 2 != 0:  
            num *= 2
            if num > 9:
                num -= 9
        total_sum += num
    return total_sum