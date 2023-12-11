```
import numpy as np
def luhn_algorithm(input_vector):
    result = 0
    for i in range(1, len(input_vector), 2):
        digit = input_vector[i] * 2
        if digit > 9:
            digit -= 9
        result += digit
    return result
```