```
import re

def luhn(card_number):
    card_number = list(map(int, re.sub(r'\D+', '', str(card_number))))
    if len(card_number) != 16:
        return "Invalid card number"
    result = sum(sum(divmod(d * 2, 10)) + d for i, d in enumerate(card_number) if i % 2 == 0) + sum(divmod(d * 2, 10)[1] for i, d in enumerate(card_number) if i % 2 != 0)
    return abs(result) % 10


card_numbers = list(map(int, input().split()))
print(luhn(card_numbers))