def luhn():
    card_number = [int(x) for x in str(input("Enter a vector of 16 digits: ")).replace(" ", "")[::-1]]
    sum_total = 0

    for i, digit in enumerate(card_number):
        if (i % 2 == 1):
            digit *= 2
            if digit > 9:
                digit -= 9
        sum_total += digit

    return str(10 - (sum_total % 10)) if sum_total % 10 != 0 else '0'

print(luhn())