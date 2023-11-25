def luhn_algorithm(digits):
    digits = list(map(int, digits))
    for i in range(len(digits) - 2, -1, -2):
        digits[i] *= 2
        if digits[i] > 9:
            digits[i] -= 9
    return sum(digits)


# Read input from user
n = int(input())
digits = input().split()

# Call the function and print the result
result = luhn_algorithm(digits)
print(result)