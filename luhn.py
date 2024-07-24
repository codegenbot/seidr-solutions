```
import re

def luhn(card_number):
    card_number = list(map(int, re.sub(r'\D+', '', str(card_number))))
    card_number = [int(x) for x in str(card_number)[::-1]]
    result = sum(sum(divmod(d * 2, 10)) + d if i % 2 != 0 else d for i, d in enumerate(card_number))
    return (result) % 10