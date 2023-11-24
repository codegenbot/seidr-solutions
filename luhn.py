def luhn_algorithm(digits):
    new_digits = []
    for i, digit in enumerate(digits):
        if i % 2 == 1:
            doubled_digit = digit * 2
            if doubled_digit > 9:
                doubled_digit -= 9
            new_digits.append(doubled_digit)
        else:
            new_digits.append(digit)
    return sum(new_digits)


# Read input from user
n = int(input())
digits = list(map(int, input().split()))

# Call the function and print the result
result = luhn_algorithm(digits)
print(result)