def luhn_algorithm(digits):
    new_digits = []
    for i in range(0, len(digits), 2):
        new_digit = digits[i] * 2
        if new_digit > 9:
            new_digit -= 9
        new_digits.append(new_digit)
    
    return sum(new_digits[::-1])


n = int(input())
digits = list(map(int, input().split()))[::-1]

result = luhn_algorithm(digits)
print(result)