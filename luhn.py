```python
def luhn(card_number):
    card_number = [int(x) for x in str(card_number)]
    result = 0
    for i, digit in enumerate(card_number):
        if i % 2 == 1:
            double_digit = digit * 2
            if double_digit > 9:
                double_digit -= 9
            result += double_digit
        else:
            result += digit
    return result

card_number = input("Enter a credit card number: ")
print(luhn(int(card_number)))