def luhn(card_number):
    digits = list(map(int, card_number.split()))
    for i in range(len(digits) - 2, -1, -2):
        digits[i] *= 2
        if digits[i] > 9:
            digits[i] -= 9
    return sum(digits)


card_number = input()
print(luhn(card_number))