def luhn_algorithm(digits):
    new_digits = []
    for i in range(len(digits)):
        if i % 2 == 1:
            num = digits[i] * 2
            if num > 9:
                num -= 9
            new_digits.append(num)
        else:
            new_digits.append(digits[i])
    return sum(new_digits)


n = int(input())
digits = list(map(int, input().split()))
print(luhn_algorithm(digits))