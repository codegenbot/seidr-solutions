```
def luhn(card_number):
    card_number = [int(x) for x in str(card_number)]
    result = 0
    for i, digit in enumerate(card_number):
        if (i % 2 == 1 and digit * 2 >= 10): 
            double_digit = digit * 2 - 9 
        else:
            double_digit = digit * 2 if i % 2 == 1 else digit
        result += double_digit
    return result

card_number = int(input("Enter a credit card number: "))
print(luhn(card_number))