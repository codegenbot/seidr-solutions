def luhn(card_number):
    card_number = [int(x) for x in str(card_number)]
    double_digit = []
    for i, digit in enumerate(card_number[1:]):
        if i % 2 != 0:
            digit *= 2
            if digit > 9:
                digit -= 9
        double_digit.append(digit)
    return sum(double_digit)


card_number = list(map(int, input().split()))
print(luhn(card_number))