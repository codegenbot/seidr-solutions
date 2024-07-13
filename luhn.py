```
def luhn(card):
    card = [int(x) for x in card.replace(' ', '')]
    new_card = []
    for i, digit in enumerate(card):
        if (i % 2 == 1):
            double_digit = digit * 2
            if double_digit >= 10:
                new_card.append(double_digit % 10)
            else:
                new_card.append(double_digit)
        else:
            new_card.append(digit)
    return sum(new_card)

card_number = input("Enter a credit card number: ")
print(luhn(card_number))