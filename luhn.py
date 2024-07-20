def luhn(card_number):
    card = [int(x) for x in str(card_number)]
    
    if len(card) > 16:
        return False

    total = 0
    is_second = False
    
    for i, num in enumerate(reversed(card)):
        if is_second:
            num *= 2
            if num > 9:
                num -= 9
                
        total += num
        is_second = not is_second
        
    return total % 10 == 0

card_number = input().strip()
print(luhn(int(card_number)))