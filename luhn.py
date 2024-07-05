def luhn(card_number):
    card_number = [int(x) for x in str(card_number)]
    result = 0
    for i, digit in enumerate(card_number):
        if i % 2 == 1:
            double_digit = digit * 2
            result += 9 - double_digit if double_digit > 9 else double_digit
        else:
            result += digit
    total_count = len(card_number)
    return result + (total_count // 2) if total_count % 2 != 0 else 0

card_number = input("Enter a credit card number: ")
print(luhn(int(card_number)))