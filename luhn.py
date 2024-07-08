```
def luhn(card_number):
    card_number = [int(x) for x in card_number]
    doubled = False
    total = 0
    
    for digit in card_number:
        if doubled:
            if digit * 2 > 9:
                total += (digit * 2) - 9
            else:
                total += digit * 2
            doubled = False
        else:
            total += digit
            doubled = True

    return total

card_number = input("Enter the card number: ")
print(luhn(card_number))