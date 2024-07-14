```
def luhn(card_number):
    card_number = [int(x) for x in str(card_number)] 
    new_card_number = [card_number[i] if i % 2 == 0 else card_number[i] * 2 if card_number[i] * 2 > 9 else card_number[i] * 2 - 9 for i in range(len(card_number))]
    return sum(new_card_number)