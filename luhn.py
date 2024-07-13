```
def luhn(card):
    card = [int(x) for x in ' ' + str(card).replace(' ', '')[1:-1] + ' '].split()
    card.reverse()
    total = 0
    is_double = False
    for i, digit in enumerate(card):
        if i % 2 == 0:
            total += digit
        else:
            doubled = digit * 2
            total += (doubled - (doubled // 10) * 9)
    return -1 if total % 10 != 0 else 1

print(luhn([4, 8, 4, 7, 1, 9, 2, 9, 4, 7, 6, 5, 3, 3, 3, 8]))