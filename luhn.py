def luhn(digits):
    new_digits = []
    for i in range(len(digits)):
        if i % 2 == 1:
            new_digit = digits[i] * 2
            if new_digit > 9:
                new_digit -= 9
            new_digits.append(new_digit)
        else:
            new_digits.append(digits[i])
    return sum(new_digits)

# Read input
n = int(input())
digits = list(map(int, input().split()))

# Call the function and print the result
print(luhn(digits))