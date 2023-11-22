def luhn_algorithm(digits):
    # Double every other digit starting with the second digit
    for i in range(1, len(digits), 2):
        digits[i] *= 2
        # Subtract 9 if the result is over 9
        if digits[i] > 9:
            digits[i] -= 9
    # Return the sum of all the new digits
    return sum(digits)


# Read input from user
n = int(input())
digits = list(map(int, input().split()))

# Call the function and print the output
print(luhn_algorithm(digits))