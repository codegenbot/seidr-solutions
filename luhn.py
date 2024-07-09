```
def luhn():
    card_number = [int(x) for x in str(input("Enter your credit card number: "))]
    total = 0
    for i, num in enumerate(reversed(card_number)):
        if i >= 1 and i % 2 == 0:
            doubled = (num * 2)
            total += doubled // 10 + (doubled % 10) if doubled > 9 else doubled
        else:
            total += num
    return "Invalid" if sum(card_number) % 10 != total % 10 else "Valid"

print(luhn())