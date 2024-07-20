```
def luhn(card_number):
    card = [int(x) for x in str(card_number)]
    
    if len(card) > 16:
        return "Invalid input: Card number should be 16 digits."
    
    result = sum(int(d) if i % 2 == 0 else 2 * int(d) % 10 for i, d in enumerate(card)) % 10
    return str(result) if result == 0 else str(9 - result)


card_number = input().strip()
if card_number.isdigit() and len(card_number) == 16:
    print(luhn(int(card_number)))
else:
    print("Invalid input: Card number should be 16 digits.")