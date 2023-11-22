def luhn_algorithm(digits):
    total_sum = 0
    for i, digit in enumerate(digits):
        if i % 2 == 1:
            temp = digit * 2
            if temp > 9:
                temp -= 9
            total_sum += temp
        else:
            total_sum += digit
    return total_sum


n = int(input())
digits = list(map(int, input().split()))
result = luhn_algorithm(digits)
print(result)