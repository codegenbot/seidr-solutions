Here is the solution:

def luhn(card_number):
    card_number = [int(x) for x in str(card_number)[1:]]
    card_number = card_number[::-1]
    
    result = 0
    for i, num in enumerate(card_number):
        if i % 2 == 0:
            num *= 2
            if num > 9:
                num -= 9
                
        result += num
    
    return result