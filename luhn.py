def luhn():
    card_number = [int(x) for x in str(input("Enter your credit card number: "))]
    total = 0
    for i, num in enumerate(reversed(card_number)):
        if i % 2 == 1:
            doubled = (num * 2) % 10   
            total += doubled
        else:
            total += num
    return "Invalid" if (total + card_number[-1]) % 10 != 0 else "Valid"

print(luhn())