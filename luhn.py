```
def luhn():
    card_number = [int(x) for x in str(input("Enter your credit card number: "))]
    total = sum([num if i % 2 == 0 else num * 2 // 10 + num % 10 if num * 2 >= 10 else num * 2 for i, num in enumerate(reversed(card_number))])
    return "Invalid" if total % 10 != card_number[-1] % 10 else "Valid"

print(luhn())