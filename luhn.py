```
import re

def luhn(card_number):
    card = [int(x) for x in re.sub('[^0-9]', '', str(card_number))]
    
    if len(card) > 16:
        return 
    new_card = []
    double_even = False
    for num in card:
        if double_even:
            temp = num * 2
            new_card.append((temp // 10) + ((temp % 10) if temp < 10 else -9))  
            double_even = False
        else:
            new_card.append(num)
            double_even = not double_even

    return sum(new_card)

card_number = input().strip()
if card_number.isdigit() and len(card_number) == 16:
    print(luhn(int(card_number)))
else:
    print('Invalid input: Card number should be 16 digits.')