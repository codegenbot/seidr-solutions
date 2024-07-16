digits = list(map(int, input().split()))

total = 0
for i in range(len(digits) - 2, -1, -2):
    double_digit = digits[i] * 2
    total += double_digit if double_digit <= 9 else double_digit - 9

total += sum(digits[-1::-2])

print(total)