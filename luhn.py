def luhn_algorithm(digits):
    new_digits = []
    for i in range(len(digits)):
        digit = int(digits[i])
        if i % 2 == 1:
            digit *= 2
            if digit > 9:
                digit -= 9
        new_digits.append(digit)
    return sum(new_digits)


n = int(input())
digits = input().split()
result = luhn_algorithm(digits)
print(result)