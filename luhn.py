def luhn_algorithm(digits):
    new_digits = []
    for i in range(16):
        if i % 2 == 1:
            digit = 2 * digits[i]
            if digit > 9:
                digit -= 9
            new_digits.append(digit)
        else:
            new_digits.append(digits[i])
    return sum(new_digits)


digits = list(map(int, input().split()))
result = luhn_algorithm(digits)
print(result)