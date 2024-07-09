Here is the solution in Python:

def luhn(card_number):
    sum = 0
    for i, digit in enumerate(map(int, card_number)):
        if (i % 2) == 1:
            digit *= 2
            if digit > 9:
                digit -= 9
        sum += digit
    return str(sum)

card_num = input().split()
print(luhn(card_num))