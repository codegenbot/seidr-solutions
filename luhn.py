```
import numpy as np

def luhn_algorithm(credit_card_number):
    # Calculate the sum of all digits in the credit card number
    total = np.sum(credit_card_number)
    
    # Double every other digit starting with the second digit
    for i in range(1, len(credit_card_number), 2):
        digit = credit_card_number[i] * 2
        if digit > 9:
            digit = digit - 9
        total += digit
    
    # Return the sum of all digits in the credit card number
    return total
```