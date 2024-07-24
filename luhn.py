import re

def luhn(card_number):
    card_number = list(map(int, re.sub(r'\D+', '', str(card_number))))
    result = sum(sum(divmod(d * 2, 10)) + d if i % 2 else d for i, d in enumerate(card_number))
    return abs(result) % 10

card_numbers = list(map(int, input().split()))
print(luhn(card_numbers))