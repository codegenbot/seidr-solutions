digits = list(map(int, input().split()))
if len(digits) != 16:
    print("Input should contain 16 digits.")
else:
    total = 0
    for i in range(16):
        if i % 2 == 1:
            double_digit = digits[i] * 2
            total += double_digit - 9 if double_digit > 9 else double_digit
        else:
            total += digits[i]
    print(total)