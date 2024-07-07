```
def luhn(card_number):
    card_number = [int(x) for x in str(card_number)]
    total = 0
    for i in range(len(card_number)-1, -1, -1):
        if (i % 2 == 1):
            doubled = int(str(card_number[i]) * 2)
            total += doubled // 10 + doubled % 10
        else:
            total += card_number[i]
    return total % 10 == 0