def luhn_algorithm(digits):
    new_digits = []
    for i in range(len(digits)):
        if i % 2 == 0:
            double_digit = digits[i] * 2
            if double_digit > 9:
                double_digit -= 9
            new_digits.append(double_digit)
        else:
            new_digits.append(digits[i])
    return sum(new_digits)


n = int(input())
digits = list(map(int, input().split()))
print(luhn_algorithm(digits))