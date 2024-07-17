Here is the completed Python code for Luhn's algorithm:

```
def luhn(card_number):
    card_number = list(map(int, str(card_number)))
    double_digit_sum = 0
    for i in range(len(card_number)):
        if (i % 2 == 1):
            card_number[i] *= 2
            if (card_number[i] > 9):
                card_number[i] -= 9
        double_digit_sum += card_number[i]
    return double_digit_sum