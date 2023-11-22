def luhn_algorithm(digits):
    new_digits = []
    for i in range(len(digits)-1, -1, -1):
        if i % 2 == 0:
            new_digit = digits[i] * 2
            if new_digit > 9:
                new_digit -= 9
            new_digits.insert(0, new_digit)
        else:
            new_digits.insert(0, digits[i])
    return sum(new_digits)


n = int(input())
digits = list(map(int, input().split()))

print(luhn_algorithm(digits))