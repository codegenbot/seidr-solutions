def luhn(digits):
    new_digits = []
    for i in range(len(digits)):
        if i % 2 != 0:
            doubled = digits[i] * 2
            if doubled > 9:
                new_digits.append(doubled - 9)
            else:
                new_digits.append(doubled)
        else:
            new_digits.append(digits[i])
    return sum(new_digits)


# Read input
n = int(input())
digits = list(map(int, input().split()))

# Call function and print result
print(luhn(digits))