def luhn(card_number):
    card_number = [int(x) for x in str(card_number)]
    sum = 0
    for i, digit in enumerate(card_number):
        if (i % 2 == 1 and digit * 2 >= 10):
            sum += digit * 2 - 9
        elif i % 2 == 1:
            sum += digit * 2
        else:
            sum += digit
    return sum

card_number = int(input("Enter the credit card number: "))
print(luhn(card_number))