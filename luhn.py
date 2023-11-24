def luhn_algorithm(digits):
    new_digits = []
    for i in range(len(digits)):
        if i % 2 == 1:
            doubled_digit = int(digits[i]) * 2
            if doubled_digit > 9:
                doubled_digit -= 9
            new_digits.append(doubled_digit)
        else:
            new_digits.append(int(digits[i]))
    return sum(new_digits)


n = int(input())
digits = input().split()
print(luhn_algorithm(digits))