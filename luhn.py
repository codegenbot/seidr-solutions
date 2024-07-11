def luhn(digits):
    total = 0
    for i in range(len(digits)):
        if i % 2 == 1:
            num = digits[i] * 2
            if num > 9:
                num -= 9
            total += num
        else:
            total += digits[i]
    return total


input_len = int(input())
input_digits = list(map(int, input().split()))
print(luhn(input_digits))