Here is the Python code that implements Luhn's algorithm:

```
def luhn(card_number):
    card_number = list(map(int, str(card_number)))
    double_even = False
    sum_digits = 0
    
    for digit in card_number:
        if double_even:
            digit *= 2
            if digit > 9:
                digit -= 9
        double_even = not double_even
        sum_digits += digit
    
    return sum_digits