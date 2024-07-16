```Python
def luhn():
    card_number = [int(x) for x in str(input("Enter a vector of 16 digits: ")).replace(" ", "")]
    first_half = card_number[:8]
    second_half = card_number[8:]
    second_half = second_half[::-1]

    sum_total = 0

    for i, digit in enumerate(first_half + second_half):
        if (i % 2 == 1):
            double_digit = digit * 2
            if double_digit > 9:
                double_digit -= 9
            sum_total += double_digit
        else:
            sum_total += digit

    return str(10 - (sum_total % 10)) if sum_total % 10 != 0 else '0'

print(luhn())