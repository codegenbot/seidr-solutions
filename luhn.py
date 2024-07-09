```python
def luhn(card_number):
    card_number = [int(x) for x in str(card_number)]
    sum = 0
    double = False
    for i in range(len(card_number)):
        digit = card_number[i]
        if double:
            if digit * 2 > 9:
                sum += digit * 2 - 9
            else:
                sum += digit * 2
            double = False
        else:
            sum += digit
            double = not double
    return sum