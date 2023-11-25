digits = input().split()
digits = [int(d) for d in digits]

sum_digits = 0
for i in range(len(digits)):
    if i % 2 == 1:
        double = digits[i] * 2
        if double > 9:
            double -= 9
        sum_digits += double
    else:
        sum_digits += digits[i]

print(sum_digits)