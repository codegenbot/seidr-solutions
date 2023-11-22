def luhn_algorithm(digits):
    result = 0
    for i in range(len(digits)):
        if i % 2 == 1:
            digit = 2 * digits[i]
            if digit > 9:
                digit -= 9
            result += digit
        else:
            result += digits[i]
    return result


n = int(input())
digits = list(map(int, input().split()))
print(luhn_algorithm(digits))